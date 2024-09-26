#pragma once

#include <iostream>
#include <string>

/************************************/
/*     Решение сервисных задач      */
/************************************/

// Функция для преобразования градусов в радианы
float DegreesToRadians(float Degrees);

// Функция для преобразования радиан в градусы
float RadiansToDegrees(float Radians);

// Функция для чтения float значений с консоли
float ReadParameter(const std::string& ParamName);