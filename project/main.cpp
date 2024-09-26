#include <iostream>

#include "modes/include/AstroInertialMode.h"
#include "modes/include/CorrectionMode.h"

int main() {

	// Ввод режима работы программы
    std::string mode;
    std::cout << "Enter mode. Please enter either 'astro_inertial' or 'correction': ";
    std::cin >> mode;

	// Настройка режима работы программы
    if (mode == "astro_inertial") {
        AstroInertialMode();
    } 
    else if (mode == "correction") {
        CorrectionMode();
    } 
    else {
        std::cerr << "Invalid mode. Please enter either 'astro_inertial' or 'correction'." << std::endl;
    }

    return 0;
}	