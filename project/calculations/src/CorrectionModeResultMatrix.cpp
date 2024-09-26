#include "../include/CorrectionModeResultMatrix.h"

/************************************/
/*        Матрица коррекции         */
/************************************/

Matrix3x3 CorrectionMode(
                        float Psi,
                        float Phi, float Lambda) {

    // Создание объекты классов
    Rotation rotation( Psi, 0.0f, 0.0f);  // Задание угла для вращения
    GeographyMatrix geography(Phi, Lambda); // Задание  широты и долготы

    // Перемножение матриц
    Matrix3x3 C_Psi = rotation.ComputeC_Psi();
    Matrix3x3 GeographyMatrix = geography.ComputeGeographyMatrix();

    // Получение матрицы CoorectionModeResult путем перемножение матрицы C_psi и матрицы GeographyMatrix
    Matrix3x3 CoorectionModeResult = Matrix3x3::MultiplyMatrix(C_Psi, GeographyMatrix);
    
    // Вывод результата
    std::string resultName = "CoorectionModeResult Matrix:";
    CoorectionModeResult.PrintMatrix(resultName);

    // Возврат итоговой матрицы
    return CoorectionModeResult;
}