#include "headers/GameElement.h"
//#include "headers/WorldSpace.h"
#include "source/WorldSpace.cpp"
#include <iostream>

int main() {
	fVector a = fVector(10, 30, 20);
	fVector b = fVector(30, 10, 20);
	fVector c = a + b;

	std::cout << a.toString() << '\n';
	std::cout << b.toString() << '\n';
	std::cout << c.toString() << '\n';
	c *= 10;
	std::cout << a.toString() << '\n';
	std::cout << c.toString() << '\n';

	c = a;

	std::cout << c.toString() << '\n';

	c.s = 0;

	std::cout << -c << '\n';

	++c;

	std::cout << c.toString() << '\n';

	return 0;
}