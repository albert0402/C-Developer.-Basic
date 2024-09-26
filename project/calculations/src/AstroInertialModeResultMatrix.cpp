#include "../include/AstroInertialModeResultMatrix.h"

/************************************/
/*     Астроинерциальная матрица    */
/************************************/

// Функция для вычисления AstroInertialMode
Matrix3x3 AstroInertialMode(
                            float Theta, float Gamma,
                            float Alpha_1, float Alpha_2, float Alpha_3,
                            float Alpha, float Delta, float Azimut,
                            float S) {
    
    // Создание объектов классов
    Rotation rotation(0.0f, Theta, Gamma);  // Задание углов для вращения
    ConjugateMatrix conjugate(Alpha_1, Alpha_2, Alpha_3); // Задание углов сопряжения
    AstroMatrix astro(Alpha, Delta, Azimut); // Задание углов, полученных от звездного датчика
    TimeMatrix time(S); // Задание угла коррекции исходя из истинного гринвичского времени 

    // Вычисление матриц
    Matrix3x3 C_Theta = rotation.ComputeC_Theta();
    Matrix3x3 C_Gamma = rotation.ComputeC_Gamma();
    Matrix3x3 ConjugateMatrix = conjugate.ComputeConjugateMatrix();
    Matrix3x3 AstroMatrix = astro.ComputeAstroMatrix();
    Matrix3x3 TimeMatrix = time.ComputeTimeMatrix();

    // Обратные матрицы
    Matrix3x3 inv_C_Theta = C_Theta.InverseMatrix();
    Matrix3x3 inv_C_Gamma = C_Gamma.InverseMatrix();
    Matrix3x3 inv_ConjugateMatrix = ConjugateMatrix.InverseMatrix();
    Matrix3x3 inv_TimeMatrix = TimeMatrix.InverseMatrix();

    // Перемножение матриц
    Matrix3x3 Temp = Matrix3x3::MultiplyMatrix(inv_C_Theta, inv_C_Gamma);         
    Temp = Matrix3x3::MultiplyMatrix(Temp, inv_ConjugateMatrix);
    Temp = Matrix3x3::MultiplyMatrix(Temp, AstroMatrix);
    Matrix3x3 AstroInertialModeResult = Matrix3x3::MultiplyMatrix(Temp, inv_TimeMatrix);

    // Вывод результата
    std::string resultName = "AstroInertialModeResult Matrix:";
    AstroInertialModeResult.PrintMatrix(resultName);

    // Возврат итоговой матрицы
    return AstroInertialModeResult;
}