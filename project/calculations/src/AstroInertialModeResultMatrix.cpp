#include "../include/AstroInertialModeResultMatrix.h"

#include "../../matrixs/include/AstroMatrix.h"
#include "../../matrixs/include/ConjugateMatrix.h"
#include "../../matrixs/include/Rotation.h"
#include "../../matrixs/include/TimeMatrix.h"
#include "../../matrixs/include/Matrix.h"

#include <iostream>

void astro_inertial_mode(
                            float theta, float roll,
                            float alpha_1, float alpha_2, float alpha_3,
                            float alpha, float delta, float azimut,
                            float s,
                            float (&AstroInertialModeResult)[3][3]){
    
    // Создание объекты классов
    Rotation rotation(0.0f, theta, roll);  // Задание углов для вращения
    ConjugateMatrix conjugate(alpha_1, alpha_2, alpha_3); // Задание углов сопряжения
    AstroMatrix astro(alpha, delta, azimut); // Задание углов полученных от звездного датчика
    TimeMatrix time(s); // Задание угла коорекции исходя из истинного гринвичского времени 

    // Вычисление матриц
    rotation.computeC_theta();
    rotation.computeC_gamma();
    conjugate.computeConjugateMatrix();
    astro.computeAstroMatrix();
    time.computeTimeMatrix();

    // Получение указателей на матрицы
    float (*C_theta)[3][3] = rotation.getC_theta();
    float (*C_gamma)[3][3] = rotation.getC_gamma();
    float (*ConjugateMatrix)[3][3] = conjugate.getConjugateMatrix();
    float (*AstroMatrix)[3][3] = astro.getAstroMatrix();
    float (*TimeMatrix)[3][3] = time.getTimeMatrix();

    // Обратные матрицы
    float invC_theta[3][3];
    float invC_gamma[3][3];
    float invConjugateMatrix[3][3];
    float invTimeMatrix[3][3];

    if (!inverseMatrix(*C_theta, invC_theta)) {
        std::cout << "Failed to invert matrix C_theta." << std::endl;
    }

    if (!inverseMatrix(*C_gamma, invC_gamma)) {
        std::cout << "Failed to invert matrix C_gamma." << std::endl;
    }
    
    if (!inverseMatrix(*ConjugateMatrix, invConjugateMatrix)) {
        std::cout << "Failed to invert matrix ConjugateMatrix." << std::endl;
    }

    if (!inverseMatrix(*TimeMatrix, invTimeMatrix)) {
        std::cout << "Failed to invert matrix TimeMatrix." << std::endl;
    }

    // Временная переменная для хранения результата
    float temp[3][3];

    // Перемножение матриц
    multiplyMatrix(invC_theta, invC_gamma, temp);         
    multiplyMatrix(temp, invConjugateMatrix, temp);
    multiplyMatrix(temp, *AstroMatrix, temp);
    multiplyMatrix(temp, invTimeMatrix, AstroInertialModeResult);

    // Вывод результата
    printMatrix(AstroInertialModeResult, "Transition matrix M_APSK_to_ZPSK:");

}