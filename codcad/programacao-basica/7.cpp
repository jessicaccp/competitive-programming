#include <iostream>

using namespace std;

int main () {
    int o1, p1, b1, o2, p2, b2;
    char pais;

    cin >> o1 >> p1 >> b1 >> o2 >> p2 >> b2;

    if (o1>o2)
        pais = 'A';
    else
        if (o2>o1)
            pais = 'B';
        else
            if (p1>p2)
                pais = 'A';
            else
                if (p2>p1)
                    pais = 'B';
                else
                    if (b1>b2)
                        pais = 'A';
                    else
                        pais = 'B';

    cout << pais << "\n";

    return 0;
}
