#include <iostream>
#include "Processor.h"

int main() {
	Processor p;
	p.setId(1);
	p.setModel("i7-1165G7");

	std::cout << p.getId() << " " << p.getModel() << std::endl;

	return 0;
}
