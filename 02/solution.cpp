#include <iostream>
#include <fstream>

void part1() {
    uint x=0, y=0, value;
    std::string command;
    std::ifstream fin("in");

    while (fin >> command) {
        fin >> value;
        switch (command[0]) {
            case 'u':
                y -= value;
                break;
            case 'd':
                y += value;
                break;
            default:
                x += value;
        }
    }

    std::cout << x * y << std::endl;

}

void part2() {
    uint x=0, y=0, aim=0, value;
    std::string command;
    std::ifstream fin("in");

    while (fin >> command) {
        fin >> value;
        switch (command[0]) {
            case 'u':
                aim -= value;
                break;
            case 'd':
                aim += value;
                break;
            default:
                x += value;
                y += aim*value;
        }
    }

    std::cout << x * y << std::endl;
}

int main() {
    part1();
    part2();
}