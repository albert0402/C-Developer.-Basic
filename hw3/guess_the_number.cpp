#include "include/game.h"
#include "include/random_value.h"

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]) {

	int max_value = 100; // default max value

	if (argc > 1) {
		std::string param = argv[1];
		if (param == "-max"){
		max_value = std::stoi(argv[2]);
	}
	}
	
	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

	// Get the last high score
	std::cout << "Enter your high score:" << std::endl;
	int attempts_count = 0; 
	
	// Check bag value
	if (std::cin.fail()) {
		std::cout << "Bad value!" << std::endl;
		return -1;
	}
	const std::string high_scores_filename = "../high_scores.txt"; // name of file, where scores are written
	
	// Write new high score to the records table
	{
		// We should open the output file in the append mode - we don't want
		// to erase previous results.
		std::ofstream out_file(high_scores_filename, std::ios_base::app);
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		// Append new results to the table:
		out_file << user_name << ' ' << guess_game(max_value) << std::endl;
	} // end of score here just to mark end of the logic block of code

	// Read the high score file and print all results
	{
		std::ifstream in_file(high_scores_filename);
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;

		std::string username;
		int high_score = 0;
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << username << '\t' << high_score << std::endl;
		}
	}

	return 0;
}