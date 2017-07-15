#include <iostream>

using namespace std;

int main () {
    int c1, c2, c3, f1, f2, f3, cor, fla;

    cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;

    cor = c1*3+c2;
    fla = f1*3+f2;

    if (cor>fla)
        cout << "C\n";
    else
        if (fla>cor)
            cout << "F\n";
        else
            if (c3>f3)
                cout << "C\n";
            else
                if (f3>c3)
                    cout << "F\n";
                else
                    cout << "=\n";

    return 0;
}
