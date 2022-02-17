#include<bits/stdc++.h>
using namespace std;

int v[1000];

int main () {
	ios_base::sync_with_stdio(false);

	int a, b, c;
	
	while (cin >> a >> b >> c and (a or b or c))
		cout << (unsigned long long)(cbrt(a*b*c)) << "\n";

	return 0;
}
