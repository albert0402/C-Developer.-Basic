#include "../include/AstroMatrix.h"

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений углов
void AstroMatrix::SetAlpha(float Alpha) {
    this->Alpha = Alpha;
    ComputeAstroMatrix(); // Обновляем матрицу при изменении угла
}

void AstroMatrix::SetDelta(float Delta) {
    this->Delta = Delta;
    ComputeAstroMatrix(); // Обновляем матрицу при изменении угла
}

void AstroMatrix::SetAzimut(float Azimut) {
    this->Azimut = Azimut;
    ComputeAstroMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений углов
float AstroMatrix::GetAlpha() {
    return Alpha;
}

float AstroMatrix::GetDelta() {
    return Delta;
}

float AstroMatrix::GetAzimut() {
    return Azimut;
}

// Метод для вывода значений приватных параметров
void AstroMatrix::PrintParameters() const {
    std::cout << "Alpha: " << Alpha << std::endl;
    std::cout << "Delta: " << Delta << std::endl;
    std::cout << "Azimut: " << Azimut << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
AstroMatrix::AstroMatrix() : Alpha(0.0f), Delta(0.0f), Azimut(0.0f) {
    Matrix.Reset(); // Инициализация матрицы нулями
}

// Конструктор с параметрами
AstroMatrix::AstroMatrix(float Alpha, float Delta, float Azimut) 
    : Alpha(Alpha), Delta(Delta), Azimut(Azimut) {
    ComputeAstroMatrix(); // Вычисляем матрицу при создании объекта
}

// Метод для вычисления матрицы
Matrix3x3 AstroMatrix::ComputeAstroMatrix() {
    Matrix3x3::MatrixType mat = {{
        {-cos(Azimut) * sin(Alpha) - sin(Azimut) * cos(Alpha) * sin(Delta), cos(Azimut) * cos(Alpha) - sin(Azimut) * sin(Alpha) * sin(Delta), sin(Azimut) * cos(Delta)},
        {sin(Azimut) * sin(Alpha) - cos(Azimut) * cos(Alpha) * sin(Delta), -sin(Azimut) * cos(Alpha) - cos(Azimut) * sin(Alpha) * sin(Delta), cos(Azimut) * cos(Delta)},
        {cos(Alpha) * cos(Delta), sin(Alpha) * cos(Delta), sin(Delta)}
    }};

    Matrix.InitializeMatrix(mat); // Инициализация матрицы
    return Matrix; // Возвращаем матрицу
}

// Метод для получения матрицы
Matrix3x3 AstroMatrix::GetAstroMatrix(){
    return Matrix;
}

// Метод для вывода матрицы
void AstroMatrix::PrintAstroMatrix() const {
    Matrix.PrintMatrix("Astro Matrix:");
}