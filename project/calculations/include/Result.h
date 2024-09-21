#pragma once

#include <cmath>
#include <iostream>

/************************************/
/*    Решение навигационной задачи  */
/************************************/

// Структура для хранения результата Навигационной задачи
struct NavigationData {
    float latitude;  // Широта φ
    float longitude; // Долгота λ
    float yaw;       // Курс ψ

    // Метод для вывода параметров навигации
    void print() const {
        std::cout << "Navigation Data:" << std::endl;
        std::cout << "Latitude (φ): " << latitude << " degrees" << std::endl;
        std::cout << "Longitude (λ): " << longitude << " degrees" << std::endl;
        std::cout << "Longitude (λ): " << yaw << " degrees" << std::endl;
    }
};

// Общая функция для вычисления широты, долготы и курса
NavigationData computeNavigationData(float (&matrix)[3][3]);