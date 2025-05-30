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

int main() {

	std::string bot[3] {"k","n","b"};
	int r = rand()% 3;
    std::string a;

	std::cout << "Enter b or k or n\n";
	std::cin >> a;

	if (a == "k" && bot[r] == "n" || a == "n" && bot[r] == "b" || a == "b" && bot[r] == "k") {
		std::cout << "You win\n";
	}
	else if (a == "k" && bot[r] == "b" || a == "n" && bot[r] == "k" || a == "b" && bot[r] == "n") {
		std::cout << "You lose\n";
	}
	else if (a == "k" && bot[r] == "k" || a == "n" && bot[r] == "n" || a == "b" && bot[r] == "b") {
		std::cout << "Draw\n";
	}
	std::cout << bot[r];
		//ƒописать кнб и создать массив размером 4 (7 -2 4 -9), вывести его полностью, а потом вывести отриц числа
		//*¬ывести числа в пор€дке возрастани€ (пузырьковый метод), смотреть в интернете, только, если не пойму

	
}