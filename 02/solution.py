#!/usr/bin/python3
def part1():
    x = y = 0

    with open("in", "r") as f:
        for line in f.readlines():
            command, value = line.split()
            if command[0] == "u":
                y -= int(value)
            elif command[0] == "d":
                y += int(value)
            else:
                x += int(value)

    print(x*y)


def part2():
    x = y = aim = 0

    with open("in", "r") as f:
        for line in f.readlines():
            command, value = line.split()
            if command[0] == "u":
                aim -= int(value)
            elif command[0] == "d":
                aim += int(value)
            else:
                x += int(value)
                y += aim * int(value)
    
    print(x * y)

if __name__ == '__main__':
    part1()
    part2()