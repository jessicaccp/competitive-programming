#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	char a;
	double b, c;
	
	cout << fixed << setprecision(2);
	
	cin >> a >> b >> c;
	
	if (a == 'M')
		cout << b*c << "\n";
	else
		cout << b/c << "\n";
	
	return 0;
}
