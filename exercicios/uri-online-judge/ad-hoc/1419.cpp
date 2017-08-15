#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int r;
	
	while (cin >> r and r) {
		int m[r], l[r], sm, sl, cm, cl;
		sm = sl = cm = cl = 0;
		
		for (int i=0; i<r; i++) {
			cin >> m[i];
			sm += m[i];
		}
		
		for (int i=0; i<r; i++) {
			cin >> l[i];
			sl += l[i];
		}
		
		for (int i=2; i<r; i++) {
			if (!((l[i] == l[i-1] and l[i-1] == l[i-2]) and (m[i] == m[i-1] and m[i-1] == m[i-2])))
				if (l[i] == l[i-1] and l[i-1] == l[i-2]) {
					cl = 1;
					break;
				}
				else if (m[i] == m[i-1] and m[i-1] == m[i-2]) {
					cm = 1;
					break;
				}
				
			if ((l[i] == l[i-1] and l[i-1] == l[i-2]) and (m[i] == m[i-1] and m[i-1] == m[i-2]))
				break;
		}
		
		if (cl != cm)
			if (cl)
				sl += 30;
			else if (cm)
				sm += 30;
				
		if (sm == sl)
			cout << "T\n";
		else if (sm > sl)
			cout << "M\n";
		else
			cout << "L\n";
	}
			
	return 0;
}
