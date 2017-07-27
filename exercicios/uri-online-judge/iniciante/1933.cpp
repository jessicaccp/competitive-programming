#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >>b;
	
	if (a==b or a>b)
		cout << a << "\n";
	else
		cout << b << "\n";

	return 0;
}
