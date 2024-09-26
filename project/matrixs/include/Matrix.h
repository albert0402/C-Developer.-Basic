#pragma once

#include <array>
#include <string>
#include <iostream>
#include <stdexcept>

/************************************/
/*   Базовый класс матрицы 3 на 3   */
/************************************/

class Matrix3x3 {
public:
    using MatrixType = std::array<std::array<float, 3>, 3>;

private:
    MatrixType mat; // 3x3 матрица

public:
    // Конструкторы
    Matrix3x3();
    Matrix3x3(MatrixType& matrix);

    // Методы
    void Reset(); // Инициализация нулями
    void InitializeMatrix(MatrixType& newMat); // Инициализация конкретными значениями
    Matrix3x3 InverseMatrix(); // Получение обратной матрицы
    float DeterminantMatrix(); // Вычисление детерминанта

    static Matrix3x3 MultiplyMatrix(Matrix3x3& a, Matrix3x3& b); // Умножение двух матриц

    void PrintMatrix(const std::string& name) const; // Вывод матрицы
    MatrixType& GetMatrix(); // Получение ссылки на матрицу

    Matrix3x3 Transpose(); // Транспонирование матрицы
    float Trace(); // След матрицы
    void AddMatrix(const Matrix3x3& other); // Сложение с другой матрицей
    void SubtractMatrix(const Matrix3x3& other); // Вычитание другой матрицы
};