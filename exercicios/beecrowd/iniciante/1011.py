# -*- coding: utf-8 -*-
# Jessica Cacau | UNICID | @jessicaccp

def main():
    raio = float(input())
    volume = 4.0 / 3.0 * 3.14159 * raio * raio * raio
    print("VOLUME =", "{0:.3f}".format(volume))

if __name__ == "__main__":
    main()