#include "../calculations/Result.h"

// Реализация общей функции для вычисления широты, долготы и курса
NavigationData computeNavigationData(const float (&matrix)[3][3]) {
    NavigationData navigation;
    
    // Вычисляем широту φ
    navigation.latitude = std::asin(matrix[2][2]); 

    // Вычисляем долготу λ
    navigation.longitude = std::atan2(matrix[2][1], matrix[2][0]);

    // Вычисляем курс ψ
    navigation.yaw = std::atan2(matrix[0][2], matrix[1][2]);

    return navigation;
}