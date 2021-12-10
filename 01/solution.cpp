#include <iostream>
#include <fstream>
#include <ios>

unsigned int partOne(std::ifstream& fin) {
    unsigned int curDepth, nextDepth, numOfIncreases=0;

    fin >> curDepth;

    while (fin >> nextDepth) {
        numOfIncreases += nextDepth > curDepth;
        curDepth = nextDepth;
    }

    return numOfIncreases;
}

unsigned int partTwo(std::ifstream& fin) {

    unsigned int depths[3], nextDepth, numOfIncreases = 0, i;

    for (i = 0; i < 3; ++i) {
        fin >> depths[i];
    }

    i = 0;

    while (fin >> nextDepth) {
        numOfIncreases += nextDepth > depths[i++];
        depths[i-1] = nextDepth;
        i %= 3;
    }

    return numOfIncreases;
}

int main() {
    std::ifstream fin("./01/in");

    std::cout << "Part1 solution: " << partOne(fin) << std::endl;

    fin.clear();
    fin.seekg(0);
    std::cout << "Part2 solution: " << partTwo(fin) << std::endl;

}
