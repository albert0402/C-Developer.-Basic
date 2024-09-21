#include "../include/GeographyMatrix.h"
#include "../include/Matrix.h"

#include <iostream>
#include <cmath> // Для функций sin и cos 

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений

void GeographyMatrix::setPhi(float phi) {
    this->phi = phi;
    computeGeographyMatrix(); // Обновляем матрицу при изменении угла
}

void GeographyMatrix::setLambda(float lambda) {
    this->lambda = lambda;
    computeGeographyMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений

float GeographyMatrix::getPhi(){
    return phi;
}

float GeographyMatrix::getLambda(){
    return lambda;
}

// Метод для вывода значений на экран
void GeographyMatrix::print(){
    std::cout << "Phi: " << phi << std::endl;
    std::cout << "Lambda: " << lambda << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
GeographyMatrix::GeographyMatrix() : phi(0.0f), lambda(0.0f) {
    // Инициализация матрицы нулями
    initializeMatrix(matrix);
}

// Конструктор с параметрами
GeographyMatrix::GeographyMatrix(float phi, float lambda) : phi(phi), lambda(lambda)  {
    computeGeographyMatrix(); // Инициализация матрицы сразу при создании объекта
} 

// Метод для вычисления матрицы перехода
void GeographyMatrix::computeGeographyMatrix(){
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
void GeographyMatrix::printGeographyMatrix(){
    printMatrix(matrix, "Geography transition matrix M_GSK_to_MSK):");
}

// Метод для получения матрицы
float (*GeographyMatrix::getGeographyMatrix())[3][3] {
    return &matrix;
}