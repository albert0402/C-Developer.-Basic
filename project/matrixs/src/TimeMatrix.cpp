#include "../include/TimeMatrix.h"

/************************************/
/*          Работа с углом          */
/************************************/

// Метод для установки значения угла
void TimeMatrix::SetS(float S) {
    this->S = S;
    ComputeTimeMatrix(); // Обновляем матрицу при изменении угла
}

// Метод для получения значения угла
float TimeMatrix::GetS(){
    return S;
}

// Метод для вывода значения угла на экран
void TimeMatrix::PrintParameters() const {
    std::cout << "S: " << S << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
TimeMatrix::TimeMatrix() : S(0.0f) {
    Matrix.Reset(); // Инициализация матрицы нулями
}

// Конструктор с параметрами
TimeMatrix::TimeMatrix(float S) : S(S) {
    ComputeTimeMatrix(); // Вычисляем матрицу при создании объекта
}

// Метод для вычисления матрицы
Matrix3x3 TimeMatrix::ComputeTimeMatrix() {
    Matrix3x3::MatrixType mat = {{
        {cos(S), sin(S), 0.0f},
        {-sin(S), cos(S), 0.0f},
        {0.0f, 0.0f, 1.0f}
    }};

    Matrix.InitializeMatrix(mat); // Инициализация матрицы
    return Matrix; // Возвращаем матрицу
}

// Метод для получения матрицы
Matrix3x3 TimeMatrix::GetTimeMatrix(){
    return Matrix;
}

// Метод для вывода матрицы
void TimeMatrix::PrintTimeMatrix() const{
   Matrix.PrintMatrix("TimeMatrix:");
}