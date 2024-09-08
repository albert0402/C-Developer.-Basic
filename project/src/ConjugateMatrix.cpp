#include "../include/ConjugateMatrix.h"
#include "../include/Matrix.h"

#include <iostream>
#include <cmath>

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений углов
void ConjugateMatrix::setAlpha1(float alpha1) {
    this->alpha1 = alpha1;
    computeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

void ConjugateMatrix::setAlpha2(float alpha2) {
    this->alpha2 = alpha2;
    computeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

void ConjugateMatrix::setAlpha3(float alpha3) {
    this->alpha3 = alpha3;
    computeConjugateMatrix(); // Обновляем матрицу при изменении угла
}

// Методы для получения значений углов
float ConjugateMatrix::getAlpha1() const {
    return alpha1;
}

float ConjugateMatrix::getAlpha2() const {
    return alpha2;
}

float ConjugateMatrix::getAlpha3() const {
    return alpha3;
}

// Метод для вывода значений углов
void ConjugateMatrix::print() const {
    std::cout << "Alpha1: " << alpha1 << std::endl;
    std::cout << "Alpha2: " << alpha2 << std::endl;
    std::cout << "Alpha3: " << alpha3 << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
ConjugateMatrix::ConjugateMatrix() : alpha1(0.0f), alpha2(0.0f), alpha3(0.0f) {
    // Инициализация матрицы нулями
    initializeMatrix(matrix);
}

// Конструктор с параметрами
ConjugateMatrix::ConjugateMatrix(float a1, float a2, float a3) : alpha1(a1), alpha2(a2), alpha3(a3) {
    computeConjugateMatrix(); // Инициализация матрицы сразу при создании объекта
}

// Метод для вычисления матрицы
void ConjugateMatrix::computeConjugateMatrix() {
    matrix[0][0] = cos(alpha1) * cos(alpha3) + sin(alpha1) * sin(alpha2) * sin(alpha3);
    matrix[0][1] = sin(alpha1) * cos(alpha2);
    matrix[0][2] = -cos(alpha1) * sin(alpha3) + sin(alpha1) * sin(alpha2) * cos(alpha3);

    matrix[1][0] = -sin(alpha1) * cos(alpha3) + cos(alpha1) * sin(alpha2) * sin(alpha3);
    matrix[1][1] = cos(alpha1) * cos(alpha2);
    matrix[1][2] = sin(alpha1) * sin(alpha3) + cos(alpha1) * sin(alpha2) * cos(alpha3);

    matrix[2][0] = cos(alpha2) * sin(alpha3);
    matrix[2][1] = -sin(alpha2);
    matrix[2][2] = cos(alpha2) * cos(alpha3);
}

// Метод для вывода матрицы
void ConjugateMatrix::printConjugateMatrix() const {
    printMatrix(matrix, "Transition matrix M_APSK_to_ZPSK:");
}

// Геттер для матрицы
const float (*ConjugateMatrix::getConjugateMatrix() const)[3][3] {
    return &matrix;
}