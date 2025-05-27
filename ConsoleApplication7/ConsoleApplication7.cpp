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

	std::cin >> a;

	if (a == "k" && bot[r] == "n" || a == "n" && bot[r] == "b" || a == "b" && bot[r] == "k")

		//ƒописать кнб и создать массив размером 4 (7 -2 4 -9), вывести его полностью, а потом вывести отриц числа
		//*¬ывести числа в пор€дке возрастани€ (пузырьковый метод), смотреть в интернете, только, если не пойму

	
}