#pragma once

/************************************/
/*     Матрица поправки времени     */
/************************************/

class TimeMatrix {
public:

/************************************/
/*          Работа с углом          */
/************************************/
    
    // Метод для установки значения угла
    void setS(float s);

    // Метод для получения значения угла
    float getS() const;

    // Метод для вывода значения угла на экран
    void print() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструктор по умолчанию
    TimeMatrix();

    // Конструктор с параметрами
    TimeMatrix(float s);

    // Метод для вычисления матрицы
    void computeTimeMatrix();

    // Метод для вывода матрицы
    void printTimeMatrix() const;

    // Геттер для матрицы
    const float (*getTimeMatrix() const)[3][3];

private:
    float s;        // Угол s
    float matrix[3][3]; // Матрица 3x3 для хранения вычисленных значений
};
