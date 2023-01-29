#include <iostream>

int main() {

	int guess;
	int num;
	int tries = 0;

	srand(time(NULL));
	num = (rand() % 10) + 1;

	do {
		std::cout << "Enter your guess (0-10): ";
		std::cin >> guess;
		tries++;

		if (guess == num) {
			std::cout << "You won!\n";
		}
		else if (guess > num) {
			std::cout << "Your guess is higher!\n";
		}
		else if (guess < num) {
			std::cout << "Your guess is lower!\n";
		}
		else {
			std::cout << "Invalid input!\n";
		}
	} while (guess != num);

	std::cout << "You did it in " << tries << " tries!";

	return 0;
}