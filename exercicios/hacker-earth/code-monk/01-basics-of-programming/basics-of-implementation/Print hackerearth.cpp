#include<bits/stdc++.h>

using namespace std;

int v[26], a[26];

int main () {
	ios_base::sync_with_stdio(false);
	
	a['a'-'a'] = 2;
	a['c'-'a'] = 1;
	a['e'-'a'] = 2;
	a['h'-'a'] = 2;
	a['k'-'a'] = 1;
	a['r'-'a'] = 2;
	a['t'-'a'] = 1;
	
	int n, p;
	string s;
	
	cin >> n >> s;
	sort(s.begin(), s.end());
	
	p = n;
	for (int i=0; i<n; i++) {
		if (i and s[i] != s[i-1] and a[s[i-1]-'a'])
			if ((v[s[i-1]-'a'] / a[s[i-1]-'a']) < p)
				p = v[s[i-1]-'a'] / a[s[i-1]-'a'];
		
		v[s[i]-'a']++;
	}
	
	cout << p << "\n";
	
	return 0;
}
