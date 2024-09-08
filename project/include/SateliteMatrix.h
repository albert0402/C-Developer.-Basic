#pragma once

class SateliteMatrix {
public:

/************************************/
/*          Работа с углами         */
/************************************/
    
    // Методы для установки значений
    void setPhi(float phi);
    void setLambda(float lambda);

    // Методы для получения значений
    float getPhi() const;
    float getLambda() const;

    // Метод для вывода значений на экран
    void print() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструктор по умолчанию
    SateliteMatrix();

    // Конструктор с параметрами
    SateliteMatrix(float phi, float lambda);

    // Метод для вычисления матрицы
    void computeSateliteMatrix();

    // Метод для вывода матрицы
    void printSateliteMatrix() const;

    // Метод для получения матрицы
    const float (*getSateliteMatrix() const)[3][3];

/************************************/
/*      Приватные члены класса      */
/************************************/

private:
    private:
    float phi;          // Широта
    float lambda;       // Долгота
    float matrix[3][3]; // Матрица 3x3 для хранения вычисленных значений
};