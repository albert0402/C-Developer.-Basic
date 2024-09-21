#pragma once

#include "../include/GeographyMatrix.h"
#include "../include/Rotation.h"
#include "../include/Matrix.h"

#include <iostream>

/************************************/
/*          Режим коррекции         */
/************************************/

/* Используемые параметры:
- угол курса psi;
- географическая широта phi;
- географическая долгота lambda.
*/

float correction_mode(
                        float psi,
                        float lambda, float phi,
                        float (&CoorectionModeResult)[3][3]){

    // Создаем объекты классов
    Rotation rotation( psi, 0.0f, 0.0f);  // Задание углов для вращения
    GeographyMatrix geography(phi, lambda); // Задание  широты и долготы

    // Вычисляем матрицы вращений
    rotation.computeC_psi();
    geography.computeGeographyMatrix();

    // Получаем матрицы для перемножения как указатель на матрицу 3x3
    float (*C_psi)[3][3] = rotation.getC_psi();  // Получаем указатель на матрицу 3x3
    float (*GeographyMatrix)[3][3] = geography.getGeographyMatrix();

    // Перемножаем матрицы C_psi и GeographyMatrix
    multiplyMatrix(*C_psi, *GeographyMatrix, CoorectionModeResult);

    // Выводим результат
    printMatrix(CoorectionModeResult, "CoorectionModeResult matrix:");

    return CoorectionModeResult[3][3];
}