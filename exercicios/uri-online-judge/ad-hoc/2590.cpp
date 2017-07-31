#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	long long n, x;
	int v[] = {1, 7, 9, 3};
	
	cin >> n;
	
	while (n--) {
		cin >> x;
		
		cout << v[x&3] << "\n";
	}

	return 0;
}
