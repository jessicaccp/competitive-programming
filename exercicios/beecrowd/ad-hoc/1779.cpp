#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);

	int t, seq, mseq, med, p, ant, n, caso=0;

	cin >> t;
	while (t--) {
		seq = mseq = med = ant = 0;
		cin >> n;
		while (n--) {
			cin >> p;
			
			if (p == med) {
				if (p == ant)
					seq++;
				else
					seq = 1;
				
				if (seq > mseq)
					mseq = seq;
			}
			else if (p > med) {
				med = p;
				seq = mseq = 1;
			}
			
			ant = p;
		}
		
		cout << "Caso #" << ++caso << ": " << mseq << "\n";
	}

	return 0;
}
