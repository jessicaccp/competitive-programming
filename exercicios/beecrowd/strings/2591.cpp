#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	string a;
	int n, cont;
	
	cin >> n;
	while (n--) {
		cin >> a;
		
		int i = 1;
		while (a[i] == 'a')
			i++;
		i -= 1;
			
		int j = i+4;
		while (a[j] == 'a')
			j++;
		j -= i+4;
		
		cout << "k";
		for (int k=0; k<i*j; k++)
			cout << "a";
		cout << "\n";
	}
	
	return 0;
}
