#pragma once

/************************************/
/*      Матрица астроизмерений      */
/************************************/	

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
    float getAlpha();
    float getDelta();
    float getAzimut();

    // Метод для вывода значений на экран
    void print();

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
    void printAstroMatrix();

    // Метод для получения матрицы
    float (*getAstroMatrix())[3][3];

/************************************/
/*      Приватные члены класса      */
/************************************/

private:
    float alpha;   // Угол альфа
    float delta;   // Угол дельта
    float azimut;  // Угол азимут
    float matrix[3][3]; // Матрица 3x3 для хранения вычисленных значений

};