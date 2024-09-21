#include "../include/Matrix.h"

#include <iostream>
#include <stdexcept> // Для выброса исключений

// Функция для инициализации матрицы
void initializeMatrix(float matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = 0;
        }
    }
}

// Функция для вычисления детерминанта матрицы
float determinantMatrix(float matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

// Функция для вычисления обратной матрицы
bool inverseMatrix(float matrix[3][3], float result[3][3]) {
    float det = determinantMatrix(matrix);

    if (det == 0) {
        std::cout << "Matrix is singular and cannot be inverted." << std::endl;
        return false;
    }

    float invDet = 1.0f / det;

    result[0][0] = invDet * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]);
    result[0][1] = invDet * (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]);
    result[0][2] = invDet * (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]);

    result[1][0] = invDet * (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]);
    result[1][1] = invDet * (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]);
    result[1][2] = invDet * (matrix[1][0] * matrix[0][2] - matrix[0][0] * matrix[1][2]);

    result[2][0] = invDet * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
    result[2][1] = invDet * (matrix[2][0] * matrix[0][1] - matrix[0][0] * matrix[2][1]);
    result[2][2] = invDet * (matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1]);

    return true;
}

// Функция для перемножения двух матриц
void multiplyMatrix(float matrixA[3][3], float matrixB[3][3], float result[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i][j] = 0.0f;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

//  Функции для вывода матрицы
void printMatrix(float matrix[3][3], const std::string& title) {
    std::cout << title << ":" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}