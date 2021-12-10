#include "stdlib.h"
#include "stdio.h"

void part1() {
    long x=0, y=0, value;
    size_t LEN = 16;
    char* command = malloc(LEN);
    FILE* fin = fopen("in", "r");

    
    int bytes;

    while ((bytes = getline(&command, &LEN, fin)) != -1) {
        value = command[bytes-2] - '0';

        if (command[0] == 'u')
            y -= value;
        else if (command[0] == 'd')
            y += value;
        else
            x += value;
    }

    printf("%ld\n", x*y);
}

void part2() {
    long x=0, y=0, aim=0, value;
    size_t LEN = 16;
    char* command = malloc(LEN);
    FILE* fin = fopen("in", "r");

    
    int bytes;

    while ((bytes = getline(&command, &LEN, fin)) != -1) {
        value = command[bytes-2] - '0';

        if (command[0] == 'u')
            aim -= value;
        else if (command[0] == 'd')
            aim += value;
        else {
            x += value;
            y += aim * value;
        }
    }

    printf("%ld\n", x*y);
}

int main() {
    part1();
    part2();
}