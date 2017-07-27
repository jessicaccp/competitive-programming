#include<bits/stdc++.h>

using namespace std;

int res[101];
int vet[101];

int main () {
	ios_base::sync_with_stdio(false);
	
	int a, b, x, i, j;
	
	cin >> a >> b;
	vet[0] = a;
	
	for (i=2; i<b+2; i++)
		cin >> vet[i];
	
	for (i=0; i<b+1; i++) {
		for (j=i+1; j<b+2; j++) {
			if (vet[i]-vet[j]>0)
				res[vet[i]-vet[j]] = 1;
			if (vet[j]-vet[i]>0)
				res[vet[j]-vet[i]] = 1;
		}
	}
	
	for (i=0; i<101; i++)
		if (res[i] == 1)
			cout << i << " ";
	cout << "\n";
	
	return 0;
}
