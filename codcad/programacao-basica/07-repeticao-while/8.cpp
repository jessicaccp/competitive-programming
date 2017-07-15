#include <iostream>

using namespace std;

int main () {
    int x, i=1;

    cin >> x;

    while (i<=x) {
        if (x%i == 0)
            if (i!=x)
                cout << i << " ";
            else
                cout << i << "\n";
        i = i+1;
    }

    return 0;
}
