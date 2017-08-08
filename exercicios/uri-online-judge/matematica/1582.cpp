#include<bits/stdc++.h>

using namespace std;

int pit (int a, int b, int c) {
	if (a*a == b*b + c*c)
		return 1;
	if (b*b == a*a + c*c)
		return 1;
	if (c*c == b*b + a*a)
		return 1;
		
	return 0;
}

int mdc (int a, int b) {
	if (b==0)
		return a;
	
	return mdc(b, a%b);	
}

int main () {
	ios_base::sync_with_stdio(false);
	
	int v[3];
	
	while (cin >> v[0] >> v[1] >> v[2]) {
		sort(v, v+3);

		if ((mdc(max(mdc(v[2], v[1]), v[0]), min(mdc(v[2], v[1]), v[0])) == 1) and pit(v[0], v[1], v[2]))
			cout << "tripla pitagorica primitiva\n";
		else if (pit(v[0], v[1], v[2]))
			cout << "tripla pitagorica\n";
		else
			cout << "tripla\n";
	}
	
	return 0;
}
