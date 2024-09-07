#include "include/read.h"
#include "include/write.h"

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {

	
	
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
	if (std::cin.fail()) {
		std::cout << "Bad value!" << std::endl;
		return -1;
	}
	const std::string filename = "../file.txt"; // name of file, where scores are written
	
    
    // // Write new high score to the records table
	// writeCalcutations(filename, values);

	// // Read the high score file and print all results
	// printCalcutations(filename);

	return 0;
}