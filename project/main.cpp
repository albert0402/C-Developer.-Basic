#include <iostream>
#include <fstream>
#include <string>

#include "calculations/getResult.cpp"
#include "calculations/getCoorectionModeResultMatrix.cpp"
#include "calculations/getAstroInertialModeResultMatrix.cpp"

int main() {
	std::string mode = "123";
	if (mode == "cor")
	{
		float psi = 0.5f;
    	float lambda = 0.3f;
    	float phi = 0.7f;

    	// Вызываем функцию coorection_mode и получаем результирующую матрицу
    	const float (&resultMatrix)[3][3] = correction_mode(psi, lambda, phi);

    	// Вызываем функцию вычисления широты, долготы и курса
    	NavigationData navData = computeNavigationData(resultMatrix);

    	// Выводим результаты с помощью метода структуры
    	navData.print();

	}
	else if (mode == "ain")
	{
	    std::cout << "test" << std::endl;
	}
	
	else
	    std::cout << "Wrong tast" << std::endl;

		return 0;
}



// int main(int argc, char *argv[]) {
	//  Блок обработки значений на входе

	// if (argc > 2) { 
    //     std::string param = argv[1];
    //     if (param == "-max"){
    //         max_value = std::stoi(argv[2]);
    //         std::cout << "Max value set to: " << max_value << std::endl;
    //     }
    // } else if (argc == 2 && std::string(argv[1]) == "-max") {
    //     std::cerr << "Error: No value provided after -max parameter." << std::endl;
    //     return 1; 
    // }
	

	// Check bag value
	// if (std::cin.fail()) {
	// 	std::cout << "Bad value!" << std::endl;
	// 	return -1;
	// }
	// const std::string filename = "../file.txt"; // name of file, where scores are written
	
    
    // // Write new high score to the records table
	// writeCalcutations(filename, values);

	// // Read the high score file and print all results
	// printCalcutations(filename);

// 	return 0;
// }