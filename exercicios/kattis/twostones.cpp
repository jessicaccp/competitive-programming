#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    
    cin >> n;
    
    if (n%2==0)
        cout << "Bob\n";
    else
        cout << "Alice\n";
    
    return 0;
}
