#include "include/game.h"
#include "include/random_value.h"
#include "include/read.h"
#include "include/write.h"

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {

	int max_value = 100; // default max value

	if (argc > 2) { 
        std::string param = argv[1];
        if (param == "-max"){
            max_value = std::stoi(argv[2]);
            std::cout << "Max value set to: " << max_value << std::endl;
        }
    } else if (argc == 2 && std::string(argv[1]) == "-max") {
        std::cerr << "Error: No value provided after -max parameter." << std::endl;
        return 1; 
    }
	
	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

	int attempts_count = 0; 
	
	// Check bag value
	if (std::cin.fail()) {
		std::cout << "Bad value!" << std::endl;
		return -1;
	}
	const std::string high_scores_filename = "../high_scores.txt"; // name of file, where scores are written
	
	// Write new high score to the records table
	writeHighScore(high_scores_filename, user_name, max_value);

	// Read the high score file and print all results
	printHighScores(high_scores_filename);

	return 0;
}