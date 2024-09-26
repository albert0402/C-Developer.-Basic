#include "../include/Rotation.h"

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений углов
void Rotation::SetPsi(float Psi) {
    this->Psi = Psi;
    ComputeC_Psi();     // Обновляем матрицу при изменении угла
}

void Rotation::SetTheta(float Theta) {
    this->Theta = Theta;
    ComputeC_Theta();   // Обновляем матрицу при изменении угла
}

void Rotation::SetGamma(float Gamma) {
    this->Gamma = Gamma;
    ComputeC_Gamma();   // Обновляем матрицу при изменении угла
}

// Методы для получения значений углов
float Rotation::GetPsi() {
    return Psi;
}

float Rotation::GetTheta() {
    return Theta;
}

float Rotation::GetGamma() {
    return Gamma;
}

// Метод для вывода значений приватных параметров
void Rotation::PrintParameters() const {
    std::cout << "Psi: " << Psi << std::endl;
    std::cout << "Theta: " << Theta << std::endl;
    std::cout << "Gamma: " << Gamma << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
Rotation::Rotation() : Psi(0.0f), Theta(0.0f), Gamma(0.0f) {
    ComputeC_Psi();
    ComputeC_Theta();
    ComputeC_Gamma();
}

// Конструктор с параметрами
Rotation::Rotation(float Psi, float Theta, float Gamma) : Psi(Psi), Theta(Theta), Gamma(Gamma) {
    ComputeC_Psi();     // Вычисляем матрицу при создании объекта
    ComputeC_Theta();   // Вычисляем матрицу при создании объекта
    ComputeC_Gamma();   // Вычисляем матрицу при создании объекта
}
// Методы для вычисления матриц

// Вычисление матрицы поворота вокруг оси Z
Matrix3x3 Rotation::ComputeC_Psi() {
    Matrix3x3::MatrixType mat = {{
        {1, 0, 0},
        {0, cos(Psi), -sin(Psi)},
        {0, sin(Psi), cos(Psi)}
    }};

    C_Psi.InitializeMatrix(mat);    // Инициализация матрицы
    return C_Psi;   // Возвращаем матрицу
}

// Возвращает матрицу поворота вокруг оси X
Matrix3x3 Rotation::ComputeC_Theta() {
    Matrix3x3::MatrixType mat = {{
        {cos(Theta), 0, sin(Theta)},
        {0, 1, 0},
        {-sin(Theta), 0, cos(Theta)}
    }};

    C_Theta.InitializeMatrix(mat);  // Инициализация матрицы
    return C_Theta; // Возвращаем матрицу
}

// Возвращает матрицу поворота вокруг оси Y
Matrix3x3 Rotation::ComputeC_Gamma() {
    Matrix3x3::MatrixType mat = {{
        {cos(Gamma), -sin(Gamma), 0},
        {sin(Gamma), cos(Gamma), 0},
        {0, 0, 1}
    }};

    C_Gamma.InitializeMatrix(mat);  // Инициализация матрицы
    return C_Gamma; // Возвращаем матрицу
}

// Методы для получения матриц

// Получение матрицы поворота вокруг оси Z
Matrix3x3 Rotation::GetC_Psi() {
    return C_Psi;
}

// Получение матрицы поворота вокруг оси X
Matrix3x3 Rotation::GetC_Theta() {
    return C_Theta;
}

// Получение матрицы поворота вокруг оси Y
Matrix3x3 Rotation::GetC_Gamma() {
    return C_Gamma;
}

// Методы для вывода матриц

// Вывод матрицы поворота вокруг оси Z
void Rotation::PrintC_Psi() const{
    C_Psi.PrintMatrix("Rotation Matrix around axis Z:");
}

// Вывод матрицы поворота вокруг оси X
void Rotation::PrintC_Theta() const{
    C_Theta.PrintMatrix("Rotation Matrix around axis Z:");
}

// Вывод матрицы поворота вокруг оси Y
void Rotation::PrintC_Gamma() const{
    C_Gamma.PrintMatrix("Rotation Matrix around axis Z:");
}