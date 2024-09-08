#pragma once

#include "../include/AstroMatrix.h"
#include "../include/ConjugateMatrix.h"
#include "../include/Rotation.h"
#include "../include/TimeMatrix.h"

#include <iostream>

// // Функция для перемножения двух матриц 3x3
// void multiplyMatrices(const float a[3][3], const float b[3][3], float result[3][3]) {
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             result[i][j] = 0.0f;
//             for (int k = 0; k < 3; ++k) {
//                 result[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
// }

// void calculate_coordinate_and_yaw() {

// /************************************/
// /*          Астроизмерения          */
// /************************************/	

//     // Углы в радианах (азимут, склонение, прямое восхождение)
//     float alpha = 1.0;   // Прямое восхождение
//     float delta = 0.5;   // Склонение
//     float Az = 0.25;     // Азимут
    
//     // Создаем объект класса AstroMatrix
//     AstroMatrix astro(alpha, delta, Az);

//     // Вывод инициализированных значений
//     astro.print();

//     // Вычисляем матрицу перехода
//     astro.computeAstroMatrix();

//     // Выводим матрицу
//     astro.printAstroMatrix();    

// /************************************/
// /*  Матрица направляющих косинусов  */
// /************************************/

//     // Углы в радианах (курс, тангаж, крен)
//     float psi = 0.0f;   // Курс
//     float theta = 0.0f;   // Тангаж
//     float gamma = 0.0f;     // Крен

//     // Создаем объект класса Rotation
//     Rotation rotation(psi, theta, gamma);
    
//     // Вывод инициализированных значений
//     rotation.print();

//     // Вычисляем матрицы направляющих косинусов
//     float C_psi[3][3];    // Матрица для хранения результатов для psi
//     float C_theta[3][3];  // Матрица для theta
//     float C_gamma[3][3];  // Матрица для gamma

//     rotation.computeC_psi(C_psi);    // Вычисление матрицы по оси psi
//     rotation.computeC_theta(C_theta); // Вычисление матрицы по оси theta
//     rotation.computeC_gamma(C_gamma); // Вычисление матрицы по оси gamma
    
//     // Выводим матрицы направляющих косинусов
//     std::cout << "Rotation matrices:" << std::endl;
//     rotation.printC_psi();
//     rotation.printC_theta();
//     rotation.printC_gamma();

    
    
//     float s = 0.5f; // Например, истинное гринвичское время

//     TimeMatrix timeMatrix(s);

// }


// Функция для перемножения двух матриц 3x3
void multiplyMatrices(const float a[3][3], const float b[3][3], float result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0.0f;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    // Создаем объекты классов
    Rotation rotation(0.5f, 0.3f, 0.2f);  // Примерные углы для вращения
    AstroMatrix astro(0.1f, 0.2f, 0.3f);  // Примерные углы для астро
    ConjugateMatrix conjugate(0.4f, 0.5f, 0.6f);  // Примерные углы для конъюгата
    TimeMatrix time(0.7f);  // Примерный угол для времени

    Rotation rotation(0.5f, 0.3f, 0.2f);

    // Вычисляем матрицы
    rotation.computeC_psi();
    rotation.computeC_theta();
    rotation.computeC_gamma();

    // Получаем указатели на матрицы
    const float (*C_psi)[3][3] = rotation.getC_psi();
    const float (*C_theta)[3][3] = rotation.getC_theta();
    const float (*C_gamma)[3][3] = rotation.getC_gamma();
    
    // Вычисляем матрицы, передавая их как аргументы
    rotation.computeC_psi();  // Вычисляем матрицу C_psi
    rotation.computeC_theta();  // Вычисляем матрицу C_theta
    rotation.computeC_gamma();  // Вычисляем матрицу C_gamma
    astro.computeAstroMatrix();  // Вычисляем матрицу Astro
    conjugate.computeConjugateMatrix();  // Вычисляем матрицу Conjugate
    time.computeTimeMatrix();    // Вычисляем матрицу Time

    // Переменные для промежуточных результатов
    float result[3][3];
    float temp[3][3];

    // Получаем матрицы для перемножения
    const float (*C_psi)[3][3] = rotation.getC_psi();  // Получаем указатель на матрицу 3x3
    const float (*C_theta)[3][3] = rotation.getC_theta();
    const float (*C_gamma)[3][3] = rotation.getC_gamma();
    const float (*astroMatrix)[3][3] = astro.getAstroMatrix();
    const float (*conjugateMatrix)[3][3] = conjugate.getConjugateMatrix();
    const float (*timeMatrix)[3][3] = time.getTimeMatrix();

    // Перемножаем матрицы
    multiplyMatrices(*C_psi, *C_theta, temp);          // Перемножаем C_psi с C_theta
    multiplyMatrices(temp, *C_gamma, temp);            // Перемножаем с C_gamma
    multiplyMatrices(temp, *astroMatrix, temp);        // Перемножаем с AstroMatrix
    multiplyMatrices(temp, *conjugateMatrix, temp);    // Перемножаем с ConjugateMatrix
    multiplyMatrices(temp, *timeMatrix, result);       // Перемножаем с TimeMatrix

    // Выводим результат
    std::cout << "Final resulting matrix:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}


float inverse[3][3];

    try {
        inverseMatrix3x3(matrix, inverse);

        std::cout << "Inverse Matrix:" << std::endl;
        for (int i = 0; i < 3; ++i) {
            std::cout << "[ ";
            for (int j = 0; j < 3; ++j) {
                std::cout << inverse[i][j] << " ";
            }
            std::cout << "]" << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }