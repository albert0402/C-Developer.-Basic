#include "../include/CoorectionModeResultMatrix.h"

#include "../../matrixs/include/GeographyMatrix.h"
#include "../../matrixs/include/Rotation.h"
#include "../../matrixs/include/Matrix.h"

#include <iostream>

void correction_mode(
                        float psi,
                        float lambda, float phi,
                        float (&CoorectionModeResult)[3][3]){

    // Создание объекты классов
    Rotation rotation( psi, 0.0f, 0.0f);  // Задание углов для вращения
    GeographyMatrix geography(phi, lambda); // Задание  широты и долготы

    // Вычисляем матрицы вращений
    rotation.computeC_psi();
    geography.computeGeographyMatrix();

    // Получение указателей на матрицы    
    float (*C_psi)[3][3] = rotation.getC_psi();
    float (*GeographyMatrix)[3][3] = geography.getGeographyMatrix();

    // Получение матрицы CoorectionModeResult путем перемножение матрицы C_psi и матрицы GeographyMatrix
    multiplyMatrix(*C_psi, *GeographyMatrix, CoorectionModeResult);

    // Вывод результата
    printMatrix(CoorectionModeResult, "CoorectionModeResult matrix:");
}