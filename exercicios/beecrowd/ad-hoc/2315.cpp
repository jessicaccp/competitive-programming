#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, c, d, v[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, x=0;
	cin >> a >> b >> c >> d;
	
	if (b == d)
		x = c-a;
	else {
		for (int i=b+1; i<d; i++)
			x += v[i];
			
		x += c + v[b]-a;
	}
	
	cout << x << "\n";
	
	return 0;
}
