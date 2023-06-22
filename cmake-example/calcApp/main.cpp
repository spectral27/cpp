#include <iostream>
#include "calc/Calc.h"

int main() {
    int x = 49;
    int y = 50;

    Calc calc;
    std::cout << "Result: " << calc.add(x, y) << std::endl;

    return 0;
}
