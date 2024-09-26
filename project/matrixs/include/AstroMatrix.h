#pragma once

#include "Matrix.h"

#include <iostream>
#include <cmath> // Для функций sin и cos

/************************************/
/*      Матрица астроизмерений      */
/************************************/	

class AstroMatrix {
private:

/************************************/
/*      Приватные члены класса      */
/************************************/

    float Alpha;  // Угол альфа
    float Delta;  // Угол дельта
    float Azimut; // Угол азимут

    Matrix3x3 Matrix;  // Матрица, которая будет содержать вычисленное значение матрицы астроизмерений

public:

/************************************/
/*          Работа с углами         */
/************************************/

    // Методы для установки углов
    void SetAlpha(float Alpha);
    void SetDelta(float Delta);
    void SetAzimut(float Azimut);

    // Методы для получения углов
    float GetAlpha();
    float GetDelta();
    float GetAzimut();

    // Метод для вывода значений приватных полей
    void PrintParameters() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструкторы
    AstroMatrix();  // Конструктор по умолчанию
    AstroMatrix(float Alpha, float Delta, float Azimut);  // Конструктор с параметрами

    // Метод для вычисления матрицы
    Matrix3x3 ComputeAstroMatrix();

    // Метод для получения матрицы
    Matrix3x3 GetAstroMatrix();

    // Метод для вывода матрицы
    void PrintAstroMatrix() const;
};