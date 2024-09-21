#include "../include/Service.h"

#include <cmath>   // Для M_PI

// Функция для преобразования градусов в радианы
float DegreesToRadians(float degrees) {
    return degrees * M_PI / 180.0f;
}

// Функция для преобразования градусов в радианы
float RadiansToDegrees(float radians) {
    return radians *  180.0f/ M_PI;
}

// Функция для чтения float значений с консоли
void readParameter(const std::string& paramName, float& param) {
    std::cout << "Enter " << paramName << " (in degrees): ";
    std::cin >> param;
}