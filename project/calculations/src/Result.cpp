#include "../include/Result.h"
#include "../include/Service.h"

#include <cmath>   // Для M_PI

// Функция для вычисления широты, долготы и курса
NavigationData computeNavigationData(float (&matrix)[3][3]) {
    
    NavigationData navigation;
    
    // Вычисление широты φ
    navigation.latitude = RadiansToDegrees(std::asin(matrix[2][2])); 

    // Вычисление долготы λ
    navigation.longitude = RadiansToDegrees(std::atan2(matrix[2][1], matrix[2][0]));

    // Вычисление курса ψ
    navigation.yaw = RadiansToDegrees(std::atan2(matrix[0][2], matrix[1][2]));

    return navigation;
}