#pragma once
#include <iostream>

// Функция для инициализации любой матрицы
void initializeMatrix(float matrix[3][3]); 

// Функция для вычисления детерминанта матрицы
float determinantMatrix(const float matrix[3][3]);

// Функция для вычисления обратной матрицы
bool inverseMatrix(const float matrix[3][3], float result[3][3]);

// Функция для перемножения двух матриц
void multiplyMatrix(const float matrixA[3][3], const float matrixB[3][3], float result[3][3]);

// Шаблонная функция для вывода любой матрицы
void printMatrix(const float matrix[3][3], const std::string& title = "Matrix");