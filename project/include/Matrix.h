#pragma once
#include <iostream>

// Функция для инициализации любой матрицы 3x3
void initializeMatrix(float matrix[3][3]); 

// Шаблонная функция для вывода любой матрицы 3x3
void printMatrix(const float matrix[3][3], const std::string& title = "Matrix");