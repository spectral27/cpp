#include <iostream>
#include "Processor.h"
#include "IncrementLib.h"

int main() {
	Processor processor;
	processor.setId("i7-1165G7");

	std::cout << processor.getId() << std::endl;

	int x = 0;

	IncrementLib incrementLib;
	incrementLib.increment(x);

	std::cout << x << std::endl;

	return 0;
}
