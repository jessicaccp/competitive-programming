#include <bits/stdc++.h>
#define MAX 500

using namespace std;

int f[MAX];

int fib (int n) {
	if (n == 0)
		return 0;
	if (n == 1 or n == 2)
		f[n] = 1;
	
	if (f[n])
		return f[n];

	if (n & 1) { // impar
		int k = (n+1)/2;
		f[n] = (fib(k)*fib(k) + fib(k-1)*fib(k-1));
	}
	else { // par
		int k = n/2;
		f[n] = (2*fib(k-1) + fib(k))*fib(k);
	}

	return f[n];
}
