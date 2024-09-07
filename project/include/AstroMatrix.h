#pragma once

class AstroMatrix {
public:

/************************************/
/*          Работа с углами         */
/************************************/
    
    // Методы для установки значений
    void setAlpha(float alpha);
    void setDelta(float delta);
    void setAzimut(float azimut);

    // Методы для получения значений
    float getAlpha() const;
    float getDelta() const;
    float getAzimut() const;

    // Метод для вывода значений на экран
    void print() const;

/************************************/
/*          Работа с матрицей       */
/************************************/

    // Конструктор по умолчанию
    AstroMatrix();

    // Конструктор с параметрами
    AstroMatrix(float alpha, float delta, float azimut);

    // Метод для вычисления матрицы
    void computeAstroMatrix();

    // Метод для вывода матрицы
    void printAstroMatrix() const;

    // Метод для получения матрицы
    const float (*getAstroMatrix() const)[3][3];

/************************************/
/*      Приватные члены класса      */
/************************************/

private:
    float alpha;   // Угол альфа
    float delta;   // Угол дельта
    float azimut;  // Угол азимут
    float matrix[3][3]; // Матрица 3x3 для хранения вычисленных значений

};