#include <iostream>

using namespace std;

int main () {
    int t1, t2, t3;
    int our, pra, bro;

    cin >> t1 >> t2 >> t3;

    if (t1<t2 and t1<t3) {
        our = 1;
        if (t2<t3) {
            pra = 2;
            bro = 3;
        }
        else {
            pra = 3;
            bro = 2;
        }
    }
    else {
        if (t2<t1 and t2<t3) {
            our = 2;
            if (t1<t3) {
                pra = 1;
                bro = 3;
            }
            else {
                pra = 3;
                bro = 1;
            }
        }
        else {
            our = 3;
            if (t1<t2) {
                pra = 1;
                bro = 2;
            }
            else {
                pra = 2;
                bro = 1;
            }
        }
    }

    cout << our << "\n" << pra << "\n" << bro << "\n";

    return 0;
}
