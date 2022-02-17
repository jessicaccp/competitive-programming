#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int v[3], n;
	string a, b;
	
	while (cin >> n) {
		memset(v, 0, sizeof(v));
		
		while (n--) {
			cin >> a >> b;
			if (b == "EPR")
				v[0]++;
			else if (b == "EHD")
				v[1]++;
			else
				v[2]++;
		}
		
		cout << "EPR: " << v[0] << "\nEHD: " << v[1] << "\nINTRUSOS: " << v[2] << "\n";
	}

	return 0;
}
