cmake_minimum_required(VERSION 3.10)
project(final_project)

set(CMAKE_CXX_STANDARD 17)

# Определяем исходные файлы для основного исполняемого файла
set(SOURCES
    main.cpp
    calculations/src/AstroInertialModeResultMatrix.cpp
    calculations/src/CorrectionModeResultMatrix.cpp
    calculations/src/Result.cpp
    calculations/src/Service.cpp
    matrixs/src/AstroMatrix.cpp
    matrixs/src/ConjugateMatrix.cpp
    matrixs/src/GeographyMatrix.cpp
    matrixs/src/Matrix.cpp
    matrixs/src/Rotation.cpp
    matrixs/src/TimeMatrix.cpp
    modes/src/AstroInertialMode.cpp
    modes/src/CorrectionMode.cpp
)

# Добавляем исполняемый файл
add_executable(main ${SOURCES})

# Функция для извлечения зависимостей и генерации .dot файла
function(generate_dot_file)
    set(dot_file "${CMAKE_BINARY_DIR}/graph.dot")
    file(WRITE ${dot_file} "digraph G {\n")

    foreach(source IN LISTS SOURCES)
        file(READ ${source} content)

        # Находим классы
        string(REGEX MATCHALL "class\\s+([a-zA-Z_][a-zA-Z0-9_]*)\\s*" class_matches ${content})

        # Находим include файлы
        string(REGEX MATCHALL "#include\\s*\"([^\"]+)\"" include_matches ${content})

        # Добавляем зависимости
        foreach(class_name IN LISTS class_matches)
            foreach(include_file IN LISTS include_matches)
                string(REGEX REPLACE "#include\\s*\"([^\"]+)\"" "\\1" include_name ${include_file})
                string(REGEX REPLACE "\\s*class\\s+|\\s*$" "" class_name ${class_name})
                string(REGEX REPLACE "\\.h$" "" include_name ${include_name})
                file(APPEND ${dot_file} "    ${class_name} -> ${include_name};\n")
            endforeach()
        endforeach()
    endforeach()

    file(APPEND ${dot_file} "}\n")
endfunction()

# Генерация .dot файла вызовом функции
generate_dot_file()

# Создаем цель для генерации графа зависимостей
add_custom_target(GenerateGraph ALL DEPENDS main)

# Команда для генерации графа в PNG после сборки
add_custom_command(
    TARGET GenerateGraph POST_BUILD
    COMMAND dot -Tpng ${CMAKE_BINARY_DIR}/graph.dot -o ${CMAKE_BINARY_DIR}/graph.png
    COMMENT "Generating graph from dot file"
)

# Выводим сообщение, что граф зависимостей сгенерирован
message(STATUS "Graphviz dependency graph generation complete.")
