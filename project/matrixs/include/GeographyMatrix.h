#pragma once

#include "Matrix.h"

#include <iostream>
#include <cmath> // Для функций sin и cos 

/************************************/
/*  Матрица направляющих косинусов  */
/************************************/

class GeographyMatrix {
private:

/************************************/
/*      Приватные члены класса      */
/************************************/

    float Phi;          // Широта
    float Lambda;       // Долгота

    Matrix3x3 Matrix;  // Матрица, которая будет содержать вычисленное значение матрицы астроизмерений

public:

/************************************/
/*          Работа с углами         */
/************************************/
    
    // Методы для установки значений
    void SetPhi(float Phi);
    void SetLambda(float Lambda);

    // Методы для получения значений
    float GetPhi();
    float GetLambda();

    // Метод для вывода значений приватных полей
    void PrintParameters() const;
    
/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструкторы
    GeographyMatrix(); // Конструктор по умолчанию
    GeographyMatrix(float phi, float lambda); // Конструктор с параметрами

    // Метод для вычисления матрицы
    Matrix3x3 ComputeGeographyMatrix();

    // Метод для получения матрицы
    Matrix3x3 GetGeographyMatrix();

    // Метод для вывода матрицы
    void PrintGeographyMatrix() const;
};