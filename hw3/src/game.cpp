#include "../include/game.h"
#include "../include/random_value.h"

#include <iostream>

int guess_game(int max_value) {
	
	int target_value = get_random_value(max_value); // get random number from function 'get_random_value'
		
	int current_value = 0;
	int count_attempt = 0; // counter of attempts
	bool not_win = true;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		count_attempt++; // add +1 attempt

		if (current_value < target_value) {
			std::cout << "Oh no, current value '" << current_value << "' is less than target value." << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "Oh no, current value '" << current_value << "' is greater than target value."<< std::endl;
		}
		else {
			std::cout << "Congratulations, you win! Total attempts = " << count_attempt << std::endl;
			break;
		}

	} while(true);

	return count_attempt; // count of attempts
}