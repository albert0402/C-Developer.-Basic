#pragma once

#include "Matrix.h"

#include <iostream>
#include <cmath>

/************************************/
/*        Матрица сопряжения        */
/************************************/

class ConjugateMatrix {
private:

/************************************/
/*      Приватные члены класса      */
/************************************/

    // Углы сопряжения
    float Alpha1;   // Угол Alpha1 (вращение вокруг оси Z)
    float Alpha2;   // Угол Alpha2 (вращение вокруг оси X)
    float Alpha3;   // Угол Alpha3 (вращение вокруг оси Y) 

    Matrix3x3 Matrix;   // Матрица, которая будет содержать вычисленное значение матрицы сопряжения

public:

/************************************/
/*          Работа с углами         */
/************************************/

    // Методы для установки значений углов
    void SetAlpha1(float Alpha1);
    void SetAlpha2(float Alpha2);
    void SetAlpha3(float Alpha3);

    // Методы для получения значений углов
    float GetAlpha1();
    float GetAlpha2();
    float GetAlpha3();

    // Метод для вывода значений приватных полей
    void PrintParameters() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструкторы
    ConjugateMatrix(); // Конструктор по умолчанию
    ConjugateMatrix(float Alpha1, float Alpha2, float Alpha3); // Конструктор с параметрами

    // Метод для вычисления матрицы
    Matrix3x3 ComputeConjugateMatrix();

    // Метод для получения матрицы сопряжения
    Matrix3x3 GetConjugateMatrix();

    // Метод для вывода матрицы
    void PrintConjugateMatrix() const;
};