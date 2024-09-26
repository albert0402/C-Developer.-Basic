#include "../include/ConjugateMatrix.h"

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений углов
void ConjugateMatrix::SetAlpha1(float Alpha1) {
    this->Alpha1 = Alpha1;
    ComputeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

void ConjugateMatrix::SetAlpha2(float Alpha2) {
    this->Alpha2 = Alpha2;
    ComputeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

void ConjugateMatrix::SetAlpha3(float Alpha3) {
    this->Alpha3 = Alpha3;
    ComputeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений углов
float ConjugateMatrix::GetAlpha1(){
    return Alpha1;
}

float ConjugateMatrix::GetAlpha2(){
    return Alpha2;
}

float ConjugateMatrix::GetAlpha3(){
    return Alpha3;
}

// Метод для вывода значений приватных параметров
void ConjugateMatrix::PrintParameters() const {
    std::cout << "Alpha1: " << Alpha1 << std::endl;
    std::cout << "Alpha2: " << Alpha2 << std::endl;
    std::cout << "Alpha3: " << Alpha3 << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
ConjugateMatrix::ConjugateMatrix() : Alpha1(0.0f), Alpha2(0.0f), Alpha3(0.0f) {
    Matrix.Reset(); // Инициализация матрицы нулями
}

// Конструктор с параметрами
ConjugateMatrix::ConjugateMatrix(float Alpha1, float Alpha2, float Alpha3)
    : Alpha1(Alpha1), Alpha2(Alpha2), Alpha3(Alpha3) {
    ComputeConjugateMatrix(); // Вычисляем матрицу при создании объекта
}

// Метод для вычисления матрицы
Matrix3x3 ConjugateMatrix::ComputeConjugateMatrix() {
    Matrix3x3::MatrixType mat = {{
        {cos(Alpha1) * cos(Alpha3) + sin(Alpha1) * sin(Alpha2) * sin(Alpha3), sin(Alpha1) * cos(Alpha2), -cos(Alpha1) * sin(Alpha3) + sin(Alpha1) * sin(Alpha2) * cos(Alpha3)},
        {-sin(Alpha1) * cos(Alpha3) + cos(Alpha1) * sin(Alpha2) * sin(Alpha3), cos(Alpha1) * cos(Alpha2), sin(Alpha1) * sin(Alpha3) + cos(Alpha1) * sin(Alpha2) * cos(Alpha3)},
        {cos(Alpha2) * sin(Alpha3), -sin(Alpha2), cos(Alpha2) * cos(Alpha3)}
    }};

    Matrix.InitializeMatrix(mat); // Инициализация матрицы
    return Matrix; // Возвращаем матрицу
}

// Метод для получения матрицы
Matrix3x3 ConjugateMatrix::GetConjugateMatrix(){
    return Matrix;
}

// Метод для вывода матрицы
void ConjugateMatrix::PrintConjugateMatrix() const {
    Matrix.PrintMatrix("Conjugate Matrix:");
}