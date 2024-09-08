#include "../include/TimeMatrix.h"
#include "../include/Matrix.h"

#include <iostream>
#include <cmath>

/************************************/
/*          Работа с углом          */
/************************************/

// Метод для установки значения угла
void TimeMatrix::setS(float s) {
    this->s = s;
    computeTimeMatrix(); // Обновляем матрицу при изменении угла
}

// Метод для получения значения угла
float TimeMatrix::getS() const {
    return s;
}

// Метод для вывода значения угла на экран
void TimeMatrix::print() const {
    std::cout << "S: " << s << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
TimeMatrix::TimeMatrix() : s(0.0f) {
    // Инициализация матрицы нулями
    initializeMatrix(matrix);
}

// Конструктор с параметрами
TimeMatrix::TimeMatrix(float s) : s(s) {
    computeTimeMatrix(); // Инициализация матрицы сразу при создании объекта
}

// Метод для вычисления матрицы
void TimeMatrix::computeTimeMatrix() {
    matrix[0][0] = cos(s);
    matrix[0][1] = sin(s);
    matrix[0][2] = 0.0f;
    matrix[1][0] = -sin(s);
    matrix[1][1] = cos(s);
    matrix[1][2] = 0.0f;
    matrix[2][0] = 0.0f;
    matrix[2][1] = 0.0f;
    matrix[2][2] = 1.0f;
}

// Метод для вывода матрицы
void TimeMatrix::printTimeMatrix() const {
    printMatrix(matrix,  "Rotation matrix M_ISK_to_GSK:");

}

// Геттер для матрицы
const float (*TimeMatrix::getTimeMatrix() const)[3][3] {
    return &matrix;
}
