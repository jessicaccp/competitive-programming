#include<bits/stdc++.h>
using namespace std;

vector<int> g[10004];

int main () {
	ios_base::sync_with_stdio(false);

	string nome, a;
	double preco;
	int qtd, pr;
	vector<pair<pair<int, double>, string>> v;
	
	while (cin >> nome >> qtd) {
		v.clear();
		cin.ignore();
		
		while (qtd--) {
			getline(cin, a);
			cin >> preco >> pr;
			cin.ignore();
			v.push_back({{-pr, preco}, a});
		}
		
		sort(v.begin(), v.end());
		
		cout << fixed << setprecision(2);
		
		cout << "Lista de " << nome << "\n";
		for (int i=0; i<v.size(); i++)
			cout << v[i].second << " - R$" << v[i].first.second << "\n";
		cout << "\n";
	}

	return 0;
}
