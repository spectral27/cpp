#include <fstream>
#include <iostream>

int main() {
    std::ofstream outputFile;
    outputFile.open("output.txt");

    std::string textToWrite = "Line 1\nLine 2\n";

    outputFile << textToWrite;

    return 0;
}
