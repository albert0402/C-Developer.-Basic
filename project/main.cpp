#include <iostream>
#include <fstream>
#include <string>
#include <cmath>   // Для M_PI

#include "calculations/include/Result.h"
#include "calculations/include/AstroInertialModeResultMatrix.h"
#include "calculations/include/CoorectionModeResultMatrix.h"
#include "calculations/include/Service.h"

// // Функция для преобразования градусов в радианы
// float DegreesToRadians(float degrees) {
//     return degrees * M_PI / 180.0f;
// }

// // Функция для преобразования градусов в радианы
// float RadiansToDegrees(float radians) {
//     return radians *  180.0f/ M_PI;
// }

// // Функция для чтения float значений с консоли
// void readParameter(const std::string& paramName, float& param) {
//     std::cout << "Enter " << paramName << " (in degrees): ";
//     std::cin >> param;
// }

int main() {

	// Настройка режима работы программы
    std::string mode;
    std::cout << "Enter mode. Please enter either 'astro_inertial' or 'correction': ";
    std::cin >> mode;

    if (mode == "astro_inertial") {
        // Параметры для astro_inertial_mode (в градусах)
        float theta, roll, alpha_1, alpha_2, alpha_3, alpha, delta, azimut, s;

        // Чтение параметров с консоли (в градусах)
        readParameter("theta", theta);
        readParameter("roll", roll);
        readParameter("alpha_1", alpha_1);
        readParameter("alpha_2", alpha_2);
        readParameter("alpha_3", alpha_3);
        readParameter("alpha", alpha);
        readParameter("delta", delta);
        readParameter("azimut", azimut);
        readParameter("s", s);

        // Переводим параметры из градусов в радианы
        theta = DegreesToRadians(theta);
        roll = DegreesToRadians(roll);
        alpha_1 = DegreesToRadians(alpha_1);
        alpha_2 = DegreesToRadians(alpha_2);
        alpha_3 = DegreesToRadians(alpha_3);
        alpha = DegreesToRadians(alpha);
        delta = DegreesToRadians(delta);
        azimut = DegreesToRadians(azimut);
		s = DegreesToRadians(s);

	    // Вычисляем AstroinertialMatrix при помощи astro_inertial_mode
        float AstroinertialMatrix[3][3];

        astro_inertial_mode(
			theta, roll,
		 	alpha_1, alpha_2, alpha_3, 
			alpha, delta, azimut,
			s, 
			AstroinertialMatrix);

        // Вычисляем навигационную информацию
        NavigationData navData;
        navData = computeNavigationData(AstroinertialMatrix);

        // Выводим результат навигации
        navData.print();
    } 
    else if (mode == "correction") {
        // Параметры для correction_mode (в градусах)
        float psi, lambda, phi;

        // Чтение параметров с консоли (в градусах)
        readParameter("psi", psi);
        readParameter("lambda", lambda);
        readParameter("phi", phi);

        // Переводим параметры из градусов в радианы
        psi = DegreesToRadians(psi);
        lambda = DegreesToRadians(lambda);
        phi = DegreesToRadians(phi);

        // Вычисляем correctionMatrix при помощи correction_mode
		float СorrectionMatrix[3][3];
        correction_mode(psi, lambda, phi, СorrectionMatrix);

        // Вычисляем навигационную информацию
        NavigationData navData;
        navData = computeNavigationData(СorrectionMatrix);

        // Выводим результат навигации
        navData.print();
    } 
    else {
        std::cerr << "Invalid mode. Please enter either 'astro_inertial' or 'correction'." << std::endl;
    }

    return 0;
}	