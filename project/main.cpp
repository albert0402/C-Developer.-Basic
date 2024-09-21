#include <iostream>
#include <fstream>
#include <string>
#include <cmath>   // Для M_PI

#include "calculations/getResult.cpp"
#include "calculations/getCoorectionModeResultMatrix.cpp"
#include "calculations/getAstroInertialModeResultMatrix.cpp"

// Функция для чтения float значений с консоли
void readParameter(const std::string& paramName, float& param) {
    std::cout << "Enter " << paramName << " (in degrees): ";
    std::cin >> param;
}

// Функция для преобразования градусов в радианы
float degreesToRadians(float degrees) {
    return degrees * M_PI / 180.0f;
}

int main() {
    std::string mode;
    std::cout << "Enter mode (astro or correction): ";
    std::cin >> mode;

    if (mode == "astro") {
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
        theta = degreesToRadians(theta);
        roll = degreesToRadians(roll);
        alpha_1 = degreesToRadians(alpha_1);
        alpha_2 = degreesToRadians(alpha_2);
        alpha_3 = degreesToRadians(alpha_3);
        alpha = degreesToRadians(alpha);
        delta = degreesToRadians(delta);
        azimut = degreesToRadians(azimut);

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
        psi = degreesToRadians(psi);
        lambda = degreesToRadians(lambda);
        phi = degreesToRadians(phi);

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
        std::cerr << "Invalid mode. Please enter either 'astro' or 'correction'." << std::endl;
    }

    return 0;
}	