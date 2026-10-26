#include <iostream>
char eingabe;

int main() {
	std::cout << "Malst du Furry? (J/N)";
	std::cin >> eingabe;

	if (eingabe == 'J') {
		std::cout << "Taff.";
	}
	else if (eingabe == 'N') {
		std::cout << "Fuck off.";
	}
}