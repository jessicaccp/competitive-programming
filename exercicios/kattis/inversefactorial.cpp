#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;

int main() {
	string a;
	
	getline(cin, a);
	int tam = a.size(), b=7;
	double logs=0;

	if (tam<=3)
		if (a == "1")
			b = 1;
		else
			if (a == "2")
				b = 2;
			else
				if (a == "6")
					b = 3;
				else
					if (a == "24")
						b = 4;
					else
						if (a == "120")
							b = 5;
						else
							b = 6;
	else {
		for (int i=1; i<b; i++)
			logs += log10(i);
		
		while (logs<=tam) {
			logs += log10(b);
			if (logs<=tam)
				b++;
		}
		
		b--;
	}
	
	cout << b << "\n";
    
	return 0;
}
