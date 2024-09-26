#pragma once

#include "../include/Service.h"
#include "../../matrixs/include/Matrix.h"

#include <cmath>   // Для M_PI
#include <iostream>

/************************************/
/*    Решение навигационной задачи  */
/************************************/

// Структура для хранения результата Навигационной задачи
struct NavigationData {
    float Latitude;  // Широта φ
    float Longitude; // Долгота λ
    float Yaw;       // Курс ψ

    // Метод для вывода параметров навигации
    void Print() const {
        std::cout << "Navigation Data:" << std::endl;
        std::cout << "Latitude (φ): " << Latitude << " degrees" << std::endl;
        std::cout << "Longitude (λ): " << Longitude << " degrees" << std::endl;
        std::cout << "Yaw (ψ): " << Yaw << " degrees" << std::endl;
    }
};

// Общая функция для вычисления широты, долготы и курса
NavigationData ComputeNavigationData(Matrix3x3& Matrix);