#include "../include/Rotation.h"
#include <iostream>
#include <cmath> // для функций sin и cos

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений
void Rotation::setPsi(float psi) {
    this->psi = psi;
    computeC_psi(C_psi);  // Обновляем матрицу при изменении угла

}

void Rotation::setTheta(float theta) {
    this->theta = theta;
    computeC_theta(C_theta);  // Обновляем матрицу при изменении угла

}

void Rotation::setGamma(float gamma) {
    this->gamma = gamma;
    computeC_gamma(C_gamma);  // Обновляем матрицу при изменении угла

}

// Методы для получения значений
float Rotation::getPsi() const {
    return psi;
}

float Rotation::getTheta() const {
    return theta;
}

float Rotation::getGamma() const {
    return gamma;
}

// Метод для вывода значений углов
void Rotation::print() const {
    std::cout << "Psi: " << psi << ", Theta: " << theta << ", Gamma: " << gamma << std::endl;    
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
Rotation::Rotation() : psi(0.0f), theta(0.0f), gamma(0.0f) {
    computeC_psi(C_psi);
    computeC_theta(C_theta);
    computeC_gamma(C_gamma);
}

// Конструктор с параметрами
Rotation::Rotation(float p, float t, float g) : psi(p), theta(t), gamma(g) {
    computeC_psi(C_psi);
    computeC_theta(C_theta);
    computeC_gamma(C_gamma);
}

// Метод для вычисления матрицы поворота по курсу (psi)
void Rotation::computeC_psi(float matrix[3][3]) const {
    matrix[0][0] = 1;
    matrix[0][1] = 0;
    matrix[0][2] = 0;
    matrix[1][0] = 0;
    matrix[1][1] = cos(psi);
    matrix[1][2] = -sin(psi);
    matrix[2][0] = 0;
    matrix[2][1] = sin(psi);
    matrix[2][2] = cos(psi);

    // Сохраняем результат в член класса
    std::copy(&matrix[0][0], &matrix[0][0] + 9, &C_psi[0][0]);
    
}

// Метод для вычисления матрицы поворота по тангажу (theta)
void Rotation::computeC_theta(float matrix[3][3]) const {
    matrix[0][0] = cos(theta);
    matrix[0][1] = 0;
    matrix[0][2] = sin(theta);
    matrix[1][0] = 0;
    matrix[1][1] = 1;
    matrix[1][2] = 0;
    matrix[2][0] = -sin(theta);
    matrix[2][1] = 0;
    matrix[2][2] = cos(theta);

    // Сохраняем результат в член класса
    std::copy(&matrix[0][0], &matrix[0][0] + 9, &C_theta[0][0]);
}

// Метод для вычисления матрицы поворота по крену (gamma)
void Rotation::computeC_gamma(float matrix[3][3]) const {
    matrix[0][0] = cos(gamma);
    matrix[0][1] = -sin(gamma);
    matrix[0][2] = 0;
    matrix[1][0] = sin(gamma);
    matrix[1][1] = cos(gamma);
    matrix[1][2] = 0;
    matrix[2][0] = 0;
    matrix[2][1] = 0;
    matrix[2][2] = 1;

    // Сохраняем результат в член класса
    std::copy(&matrix[0][0], &matrix[0][0] + 9, &C_gamma[0][0]);
}

// Метод для вывода матрицы поворота по курсу (psi)
void Rotation::printC_psi() const {
    std::cout << "Rotation matrix around psi-axis (X):" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << C_psi[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}

// Метод для вывода матрицы поворота по тангажу (theta)
void Rotation::printC_theta() const {
    std::cout << "Rotation matrix around theta-axis (Y):" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << C_theta[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}

// Метод для вывода матрицы поворота по крену (gamma)
void Rotation::printC_gamma() const {
    std::cout << "Rotation matrix around gamma-axis (Z):" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 3; ++j) {
            std::cout << C_gamma[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
}

// Метод для получения матрицы поворота по курсу (psi)
const float (*Rotation::getC_psi() const)[3][3] {
    return &C_psi;
}

// Метод для получения матрицы поворота по тангажу (theta)
const float (*Rotation::getC_theta() const)[3][3] {
    return &C_theta;
}

// Метод для получения матрицы поворота по крену (gamma)
const float (*Rotation::getC_gamma() const)[3][3] {
    return &C_gamma;
}