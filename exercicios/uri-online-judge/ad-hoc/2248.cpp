#include<bits/stdc++.h>
using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, turma=0, maior, c, m;
	vector<int> v;
	bool aux = false;
	
	while (cin >> n and n) {
		for (int i=0; i<n; i++) {
			cin >> c >> m;
			
			if (i==0 or m>maior) {
				maior = m;
				v.clear();
			}
			
			if (m == maior)
				v.push_back(c);
		}
		
		cout << "Turma " << ++turma << "\n";
		for (int i=0; i<v.size(); i++)
			cout << v[i] << " ";
		cout << "\n\n";
	}

	return 0;
}
