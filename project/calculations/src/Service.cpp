#include "../include/Service.h"

#include <cmath>   // Для M_PI
#include <limits> // Для проверки предельных значений

// Функция для преобразования градусов в радианы
float DegreesToRadians(float Degrees) {
    return Degrees * M_PI / 180.0f;
}

// Функция для преобразования градусов в радианы
float RadiansToDegrees(float Radians) {
    return Radians *  180.0f/ M_PI;
}

// Функция для чтения и валидации float значений с консоли
float ReadParameter(const std::string& ParamName) {
    float Param;
    
    while (true) {
        std::cout << "Enter " << ParamName << " (in degrees): ";
        std::cin >> Param;

        // Если ввод некорректен, очищаем поток и игнорируем ошибочные символы
        if (std::cin.fail()) {
            std::cin.clear(); // Сбросить флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорировать оставшиеся символы в потоке
            std::cout << "Invalid input. Please enter a valid numeric value." << std::endl;
        } else {
            // Если ввод корректен, прерываем цикл
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем остатки строки после числа
            break;
        }
    }

    return Param;
}