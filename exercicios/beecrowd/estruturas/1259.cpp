#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, count=0;
	cin >> a;
	vector<int> v(a);

	for (int &i : v)
		cin >> i;
	
	sort(v.begin(), v.end());
	
	for (int i=0; i<a; i++)
		if (v[i]%2 == 0) {
			cout << v[i] << "\n";
		}
		
	for (int i=a-1; i>=0; i--)
		if (v[i]%2 != 0)
			cout << v[i] << "\n";
	
	return 0;
}
