#include "../include/AstroMatrix.h"

#include <iostream>
#include <cmath> // Для функций sin и cos 

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений
void AstroMatrix::setAlpha(float alpha) {
    this->alpha = alpha;
    computeAstroMatrix(); // Обновляем матрицу при изменении угла

}

void AstroMatrix::setDelta(float delta) {
    this->delta = delta;
    computeAstroMatrix(); // Обновляем матрицу при изменении угла

}

void AstroMatrix::setAzimut(float azimut) {
    this->azimut = azimut;
    computeAstroMatrix(); // Обновляем матрицу при изменении угла

}

// Методы для получения значений
float AstroMatrix::getAlpha() const {
    return alpha;
}

float AstroMatrix::getDelta() const {
    return delta;
}

float AstroMatrix::getAzimut() const {
    return azimut;
}

// Метод для вывода значений на экран
void AstroMatrix::print() const {
    std::cout << "Alpha: " << alpha << std::endl;
    std::cout << "Delta: " << delta << std::endl;
    std::cout << "Azimut: " << azimut << std::endl;
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
AstroMatrix::AstroMatrix() : alpha(0.0f), delta(0.0f), azimut(0.0f) {
    // Инициализация матрицы нулями
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matrix[i][j] = 0.0f;
        }
    }
}

// Конструктор с параметрами
AstroMatrix::AstroMatrix(float a, float d, float az) : alpha(a), delta(d), azimut(az) {
    computeAstroMatrix(); // Инициализация матрицы сразу при создании объекта
} 

// Метод для вычисления матрицы перехода
void AstroMatrix::computeAstroMatrix() {
    // Вычисление элементов матрицы
    matrix[0][0] = -cos(azimut) * sin(alpha) - sin(azimut) * cos(alpha) * sin(delta);
    matrix[0][1] = cos(azimut) * cos(alpha) - sin(azimut) * sin(alpha) * sin(delta);
    matrix[0][2] = sin(azimut) * cos(delta);

    matrix[1][0] = sin(azimut) * sin(alpha) - cos(azimut) * cos(alpha) * sin(delta);
    matrix[1][1] = -sin(azimut) * cos(alpha) - cos(azimut) * sin(alpha) * sin(delta);
    matrix[1][2] = cos(azimut) * cos(delta);

    matrix[2][0] = cos(alpha) * cos(delta);
    matrix[2][1] = sin(alpha) * cos(delta);
    matrix[2][2] = sin(delta);
}

// Метод для вывода матрицы
void AstroMatrix::printAstroMatrix() const {
    std::cout << "Transition matrix M_ISK_to_ZPSK:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}

// Метод для получения матрицы
const float (*AstroMatrix::getAstroMatrix() const)[3][3] {
    return &matrix;
}