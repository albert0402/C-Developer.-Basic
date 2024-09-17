#pragma once

/************************************/
/*        Матрица сопряжения        */
/************************************/

class ConjugateMatrix {
public:

/************************************/
/*          Работа с углами         */
/************************************/
    
    // Методы для установки значений
    void setAlpha1(float alpha1);
    void setAlpha2(float alpha2);
    void setAlpha3(float alpha3);

    // Методы для получения значений
    float getAlpha1() const;
    float getAlpha2() const;
    float getAlpha3() const;

    // Метод для вывода значений на экран
    void print() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструктор по умолчанию
    ConjugateMatrix();

    // Конструктор с параметрами
    ConjugateMatrix(float alpha1, float alpha2, float alpha3);

    // Метод для вычисления матрицы
    void computeConjugateMatrix();

    // Метод для вывода матрицы
    void printConjugateMatrix() const;

    // Геттер для матрицы
    const float (*getConjugateMatrix() const)[3][3];

private:
    float alpha1;  // Угол alpha1
    float alpha2;  // Угол alpha2
    float alpha3;  // Угол alpha3
    float matrix[3][3]; // Матрица 3x3 для хранения вычисленных значений
};
