#include <iostream>

int main() {
	double a, h, S;
	
	std::cout << "Enter triangle width: ";
	std::cin >> a;

	std::cout << "Enter triangle height: ";
	std::cin >> h;

	S = 0.5 * a * h;

	std::cout << "Area of triangle is: " << S << std::endl;

	return 0;
}