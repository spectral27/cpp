#include <iostream>
#include "Element.cpp"

int main() {
    Element element("1");
    std::cout << element.toJsonString() << std::endl;
    return 0;
}
