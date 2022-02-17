# -*- coding: utf-8 -*-
# por @jessicaccp

from sys import stdin, stdout


def get_int():
    return map(int, stdin.readline().strip().split())


def main():
    n, x = get_int()
    stdout.write(str(format(x / (n + 2), '.2f')) + '\n')


if __name__ == "__main__":
    main()
