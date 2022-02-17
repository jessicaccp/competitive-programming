#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int v[4];
	for (int &i : v)
		cin >> i;
		
	sort(v, v+4);
	
	if ((v[2]>=v[1]+v[0]) and (v[3]>=v[1]+v[0]) and (v[3]>=v[2]+v[0]) and (v[3]>=v[2]+v[1]))
		cout << "N\n";
	else
		cout << "S\n";

	return 0;
}
