#pragma once
#include <iostream>

// Функция для инициализации любой матрицы
void initializeMatrix(float matrix[3][3]); 

// Функция для вычисления детерминанта матрицы
float determinantMatrix(float matrix[3][3]);

// Функция для вычисления обратной матрицы
bool inverseMatrix(float matrix[3][3], float result[3][3]);

// Функция для перемножения двух матриц
void multiplyMatrix(float matrixA[3][3], float matrixB[3][3], float result[3][3]);

// Шаблонная функция для вывода любой матрицы
void printMatrix(float matrix[3][3], const std::string& title = "Matrix");