#include <iostream>

using namespace std;

int main () {
    float a, b, c, d, e, maior = 0.0, menor = 10.0, soma = 0;

    cin >> a;
    if (a<menor)
        menor = a;
    if (a>maior)
        maior = a;

    cin >> b;
    if (b<menor)
        menor = b;
    if (b>maior)
        maior = b;

    cin >> c;
    if (c<menor)
        menor = c;
    if (c>maior)
        maior = c;

    cin >> d;
    if (d<menor)
        menor = d;
    if (d>maior)
        maior = d;

    cin >> e;
    if (e<menor)
        menor = e;
    if (e>maior)
        maior = e;

    soma = a+b+c+d+e;
    soma = soma - maior - menor;

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << soma << "\n";

    return 0;
}
