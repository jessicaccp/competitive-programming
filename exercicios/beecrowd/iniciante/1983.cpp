#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, a, num;
	double maior=0.0, b;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a >> b; 
		if (i==0 or b>maior) {
			num = a;
			maior = b;
		}
	}
	
	if (maior >=8)
		cout << num << "\n";
	else
		cout << "Minimum note not reached\n";

	return 0;
}
