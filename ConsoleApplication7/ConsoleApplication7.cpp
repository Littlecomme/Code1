#include <iostream>
#include <vector>


void security() {
	int a;

	std::cin >> a;

	if (a < 18) {
		std::cout << "Suck";
	}
	else if (a > 30) {
		std::cout << "old";
	}
	else {
		std::cout << "Welcome";
	}

}


void RSP() {

	while (true) {

		std::string bot[7]{ "Rock","Scissors","Paper", "rock", "scissors", "paper" };
		int r = rand() % 3;
		std::string a;


		std::cout << "Enter Rock, Paper or Scissors\n";
		std::cin >> a;

		if ((a == "Rock" || a == "rock") && bot[r] == "Scissors" || (a == "Scissors" || a == "scissors") && bot[r] == "Paper" || (a == "Paper" || a == "paper") && bot[r] == "Rock") {
			std::cout << "You win\n";
		}
		else if ((a == "Rock" || a == "rock") && bot[r] == "Paper" || (a == "Scissors" || a == "scissors") && bot[r] == "Rock" || (a == "Paper" || a == "paper") && bot[r] == "Scissors") {
			std::cout << "You lose\n";
		}
		else if ((a == "Rock" || a == "rock") && bot[r] == "Rock" || (a == "Scissors" || a == "scissors") && bot[r] == "Scissors" || (a == "Paper" || a == "paper") && bot[r] == "Paper") {
			std::cout << "Draw\n";
		}
		else {
			std::cout << "Subject not found\n";
		}

		std::cout << bot[r];
		std::cout << "\n";
	}

}

void choosegame() {

	std::string a1;
	std::cin >> a1;

	if (a1 == "RSP") {
		RSP();
	}
	else if (a1 == "security") {
		security();
	}

}

void numbers() {

	int c[4]{ 7, -2, 4, -9 };
	for (int h = 0; h < 4; h++) {
		std::cout << c[h] << " ";
	}

	std::cout << "\n";

	for (int h = 0; h < 4; h++) {
		if (c[h] < 0) {
			std::cout << c[h] << " ";
		}
	}

	std::cout << "\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++) {
			if (c[i] > c[j]) {
				std::swap(c[j], c[i]);

			}
		}

	}
	for (int h = 0; h < 4; h++) {
		std::cout << c[h] << " ";
	}
	//std::cout << c[1] << " " << c[3];

 }


int main() {}
