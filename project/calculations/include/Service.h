#pragma once

#include <iostream>
#include <string>

/************************************/
/*     Решение сервисных задач      */
/************************************/

// Функция для преобразования градусов в радианы
float DegreesToRadians(float degrees);

// Функция для преобразования радиан в градусы
float RadiansToDegrees(float radians);

// Функция для чтения float значений с консоли
void readParameter(const std::string& paramName, float& param);