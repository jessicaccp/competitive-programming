#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, c;
	char d;
	
	cin >> a >> b >> d >> c;
	
	if (d == '+')
		if (b+c>a)
			cout << "OVERFLOW\n";
		else
			cout << "OK\n";
	else
		if (b*c>a)
			cout << "OVERFLOW\n";
		else
			cout << "OK\n";
	
	return 0;
}
