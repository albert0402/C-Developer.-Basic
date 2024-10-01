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
add_custom_target(graphviz ALL
    COMMAND ${CMAKE_COMMAND} "--graphviz=graph.dot" .
    COMMAND dot -Tpng graph.dot -o graph.png
    WORKING_DIRECTORY "${SOURCES}"
)