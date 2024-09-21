#include "../include/Rotation.h"
#include <iostream>
#include <cmath> // для функций sin и cos

/************************************/
/*          Работа с углами         */
/************************************/

// Методы для установки значений

void Rotation::setPsi(float psi) {
    this->psi = psi;
    computeC_psi();  // Обновляем матрицу при изменении угла
}

void Rotation::setTheta(float theta) {
    this->theta = theta;
    computeC_theta();  // Обновляем матрицу при изменении угла
}

void Rotation::setGamma(float gamma) {
    this->gamma = gamma;
    computeC_gamma();  // Обновляем матрицу при изменении угла
}

// Методы для получения значений
float Rotation::getPsi(){
    return psi;
}

float Rotation::getTheta(){
    return theta;
}

float Rotation::getGamma(){
    return gamma;
}

// Метод для вывода значений углов
void Rotation::print(){
    std::cout << "Psi: " << psi << ", Theta: " << theta << ", Gamma: " << gamma << std::endl;    
}

/************************************/
/*          Работа с матрицей       */
/************************************/

// Конструктор по умолчанию
Rotation::Rotation() : psi(0.0f), theta(0.0f), gamma(0.0f) {
    computeC_psi();
    computeC_theta();
    computeC_gamma();
}

// Конструктор с параметрами
Rotation::Rotation(float p, float t, float g) : psi(p), theta(t), gamma(g) {
    computeC_psi();
    computeC_theta();
    computeC_gamma();
}

// Метод для вычисления матрицы поворота по курсу (psi)
void Rotation::computeC_psi() {
    C_psi[0][0] = 1;
    C_psi[0][1] = 0;
    C_psi[0][2] = 0;
    C_psi[1][0] = 0;
    C_psi[1][1] = cos(psi);
    C_psi[1][2] = -sin(psi);
    C_psi[2][0] = 0;
    C_psi[2][1] = sin(psi);
    C_psi[2][2] = cos(psi);
}

// Метод для вычисления матрицы поворота по тангажу (theta)
void Rotation::computeC_theta() {
    C_theta[0][0] = cos(theta);
    C_theta[0][1] = 0;
    C_theta[0][2] = sin(theta);
    C_theta[1][0] = 0;
    C_theta[1][1] = 1;
    C_theta[1][2] = 0;
    C_theta[2][0] = -sin(theta);
    C_theta[2][1] = 0;
    C_theta[2][2] = cos(theta);
}

// Метод для вычисления матрицы поворота по крену (gamma)
void Rotation::computeC_gamma() {
    C_gamma[0][0] = cos(gamma);
    C_gamma[0][1] = -sin(gamma);
    C_gamma[0][2] = 0;
    C_gamma[1][0] = sin(gamma);
    C_gamma[1][1] = cos(gamma);
    C_gamma[1][2] = 0;
    C_gamma[2][0] = 0;
    C_gamma[2][1] = 0;
    C_gamma[2][2] = 1;
}

// Метод для вывода матрицы поворота по курсу (psi)
void Rotation::printC_psi(){
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
void Rotation::printC_theta(){
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
void Rotation::printC_gamma(){
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
float (*Rotation::getC_psi())[3][3] {
    return &C_psi;
}

// Метод для получения матрицы поворота по тангажу (theta)
float (*Rotation::getC_theta())[3][3] {
    return &C_theta;
}

// Метод для получения матрицы поворота по крену (gamma)
float (*Rotation::getC_gamma())[3][3] {
    return &C_gamma;
}