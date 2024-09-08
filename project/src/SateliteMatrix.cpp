#include "../include/SateliteMatrix.h"

#include <iostream>
#include <cmath> // Для функций sin и cos 

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений

void SateliteMatrix::setPhi(float phi) {
    this->phi = phi;
    computeSateliteMatrix(); // Обновляем матрицу при изменении угла
}

void SateliteMatrix::setLambda(float lambda) {
    this->lambda = lambda;
    computeSateliteMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений

float SateliteMatrix::getPhi() const {
    return phi;
}

float SateliteMatrix::getLambda() const {
    return lambda;
}

// Метод для вывода значений на экран
void SateliteMatrix::print() const {
    std::cout << "Phi: " << phi << std::endl;
    std::cout << "Lambda: " << lambda << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
SateliteMatrix::SateliteMatrix() : phi(0.0f), lambda(0.0f) {
    // Инициализация матрицы нулями
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = 0.0f;
        }
    }
}

// Конструктор с параметрами
SateliteMatrix::SateliteMatrix(float phi, float lambda) : phi(phi), lambda(lambda)  {
    computeSateliteMatrix(); // Инициализация матрицы сразу при создании объекта
} 

// Метод для вычисления матрицы перехода
void SateliteMatrix::computeSateliteMatrix(){
    // Вычисление элементов матрицы
    matrix[0][0] = -sin(lambda);
    matrix[0][1] = cos(lambda);
    matrix[0][2] = 0;

    matrix[1][0] = sin(phi) * cos(lambda);
    matrix[1][1] = -sin(phi) * sin(lambda);
    matrix[1][2] = cos(phi);

    matrix[2][0] = cos(phi) * cos(lambda);
    matrix[2][1] = cos(phi) * sin(lambda);
    matrix[2][2] = sin(phi);
} 

// Метод для вывода матрицы
void SateliteMatrix::printSateliteMatrix() const {
    std::cout << "Satelite transition matrix M_GSK_to_MSK):" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}
// Метод для получения матрицы
const float (*SateliteMatrix::getSateliteMatrix() const)[3][3] {
    return &matrix;
}