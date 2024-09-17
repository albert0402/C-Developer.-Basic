#pragma once
#include <cmath>
#include <iostream>

/************************************/
/*    Решение навигационной задачи  */
/************************************/

/* Выводимые параметры:
- курс yaw;
- широта latitude;
- долгота longitude.
*/

// Структура для хранения результата Навигационной задачи
struct NavigationData {
    float latitude;  // Широта φ
    float longitude; // Долгота λ
    float yaw;       // Курс ψ

    // Метод для вывода параметров навигации
    void print() const {
        std::cout << "Navigation Data:" << std::endl;
        std::cout << "Latitude (φ): " << latitude << " radians" << std::endl;
        std::cout << "Longitude (λ): " << longitude << " radians" << std::endl;
        std::cout << "Yaw (ψ): " << yaw << " radians" << std::endl;
    }
};

// Общая функция для вычисления широты, долготы и курса
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