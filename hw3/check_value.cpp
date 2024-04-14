#include "random_value.h"

#include <iostream>

int main() {
	
	const int target_value = get_random_value();
	std::cout << "target_value " << target_value << std::endl;
	
	int current_value = 0;
	bool not_win = true;

	std::cout << "Enter your guess:" << std::endl;

	do {
		std::cin >> current_value;

		if (current_value < target_value) {
			std::cout << "Oh no, current value '" << current_value << "' is less than target value." << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "Oh no, current value '" << current_value << "' is greater than target value."<< std::endl;
		}
		else {
			std::cout << "Congratulations, you win!" << std::endl;
			break;
		}

	} while(true);

	return 0;
}