#include<bits/stdc++.h>

using namespace std;

int pts[26], pen, qts;

void resetar () {
	for (int i=0; i<26; i++)
		pts[i] = 0;
	pen = qts = 0;
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int n, t;
	char a;
	string b;
	
	while (cin >> n and n) {
		resetar();
		
		while (n--) {
			cin >> a >> t >> b;
			
			if (! b.compare("incorrect"))
				pts[a-65] += 20;
			else {
				pen += t+pts[a-65];
				qts++;
			}
		}
		
		cout << qts << " " << pen << "\n";
	}
	
	
	return 0;
}
