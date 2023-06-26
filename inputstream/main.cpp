#include <fstream>
#include <iostream>

int main() {
    std::ifstream inputFile;
    inputFile.open("text.txt");

    std::string result;
    std::string currentLine;

    while (std::getline(inputFile, currentLine)) {
        result += currentLine + "\n";
    }

    std::cout << result;

    return 0;
}
