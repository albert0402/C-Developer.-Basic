#include "../include/GeographyMatrix.h"

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений

void GeographyMatrix::SetPhi(float Phi) {
    this->Phi = Phi;
    ComputeGeographyMatrix(); // Обновляем матрицу при изменении угла
}

void GeographyMatrix::SetLambda(float Lambda) {
    this->Lambda = Lambda;
    ComputeGeographyMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений

float GeographyMatrix::GetPhi(){
    return Phi;
}

float GeographyMatrix::GetLambda(){
    return Lambda;
}

// Метод для вывода значений на экран
void GeographyMatrix::PrintParameters() const{
    std::cout << "Phi: " << Phi << std::endl;
    std::cout << "Lambda: " << Lambda << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
GeographyMatrix::GeographyMatrix() : Phi(0.0f), Lambda(0.0f) {
    Matrix.Reset(); // Инициализация матрицы нулями
}

// Конструктор с параметрами
GeographyMatrix::GeographyMatrix(float Phi, float Lambda) : Phi(Phi), Lambda(Lambda)  {
    ComputeGeographyMatrix(); // Вычисляем матрицу при создании объекта
} 

Matrix3x3 GeographyMatrix::ComputeGeographyMatrix() {
    Matrix3x3::MatrixType mat = {{
        {-sin(Lambda), cos(Lambda), 0.0f},
        {-sin(Phi) * cos(Lambda), -sin(Phi) * sin(Lambda), cos(Phi)},
        {cos(Phi) * cos(Lambda), cos(Phi) * sin(Lambda), sin(Phi)}
    }};

    Matrix.InitializeMatrix(mat); // Инициализация матрицы
    return Matrix; // Возвращаем матрицу
}

// Метод для получения матрицы
Matrix3x3 GeographyMatrix::GetGeographyMatrix(){
    return Matrix;
}

// Метод для вывода матрицы
void GeographyMatrix::PrintGeographyMatrix() const{
    Matrix.PrintMatrix("GeographyMatrix:");
}