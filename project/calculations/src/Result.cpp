#include "../include/Result.h"

/************************************/
/*    Решение навигационной задачи  */
/************************************/

// Функция для вычисления широты, долготы и курса
NavigationData ComputeNavigationData(Matrix3x3& Matrix) {
    
    NavigationData Navigation;
    
    // Получаем матрицу как ссылку на массив
    const Matrix3x3::MatrixType& mat = Matrix.GetMatrix();

    // Вычисление широты φ
    Navigation.Latitude = RadiansToDegrees(std::asin(mat[2][2])); 

    // Вычисление долготы λ
    Navigation.Longitude = RadiansToDegrees(std::atan2(mat[2][1], mat[2][0]));

    // Вычисление курса ψ
    Navigation.Yaw = RadiansToDegrees(std::atan2(mat[0][2], mat[1][2]));

    return Navigation;
}