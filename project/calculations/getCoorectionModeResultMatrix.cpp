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

const float (&correction_mode(float psi, float lambda, float phi)) [3][3]{
    // Создаем объекты классов
    Rotation rotation( psi, 0.0f, 0.0f);  // Задание углов для вращения
    GeographyMatrix satelite(phi, lambda); // Задание  широты и долготы

    // Вычисляем матрицы вращений
    rotation.computeC_psi();
    satelite.computeGeographyMatrix();

    // Получаем матрицы для перемножения как указатель на матрицу 3x3
    const float (*C_psi)[3][3] = rotation.getC_psi();  // Получаем указатель на матрицу 3x3
    const float (*GeographyMatrix)[3][3] = satelite.getGeographyMatrix();


    // Переменные для промежуточных результатов
    float CoorectionModeResult[3][3];

    // Перемножаем матрицы C_psi и GeographyMatrix
    multiplyMatrix(*C_psi, *GeographyMatrix, CoorectionModeResult);

    // Выводим результат
    printMatrix(CoorectionModeResult, "CoorectionModeResult matrix:");

    return CoorectionModeResult;
}