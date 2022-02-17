#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	long long int a, b, i, soma=0, num;
	
	cin >> a >> b;
	
	if (a<b) {
		num = b-a+1;
		if (num%2 == 0)
			soma = (a+b)*(num/2);
		else
			soma = (a+b)*(num/2) + (a+b)/2;
	}
	else {
		num = a-b+1;
		if (num%2 == 0)
			soma = (a+b)*(num/2);
		else
			soma = (a+b)*(num/2) + (a+b)/2;
	}
	
	cout << soma << "\n";
	

	return 0;
}
