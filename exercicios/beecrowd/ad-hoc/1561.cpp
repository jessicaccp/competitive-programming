#include<bits/stdc++.h>
using namespace std;

vector<int> g[10004];

int main () {
	ios_base::sync_with_stdio(false);

	bool h8, h4, h2, h1, m32, m16, m8, m4, m2, m1;
	string s[15];
	int h, m;
	char c;

	s[0] =  " ____________________________________________";
	s[1] =  "|                                            |";
	s[2] =  "|    ____________________________________    |_";
	s[3] =  "|   |                                    |   |_)";
	s[4] =  "|   |   8         4         2         1  |   |";
	s[5] =  "|   |                                    |   |";
	s[6] =  "|   |   o         o         o         o  |   |";
	s[7] =  "|   |                                    |   |";
	s[8] =  "|   |                                    |   |";
	s[9] =  "|   |   o     o     o     o     o     o  |   |";
	s[10] = "|   |                                    |   |";
	s[11] = "|   |   32    16    8     4     2     1  |   |_";
	s[12] = "|   |____________________________________|   |_)";
	s[13] = "|                                            |";
	s[14] = "|____________________________________________|";
	
	while (cin >> h >> c >> m) {
		h8 = h4 = h2 = h1 = m32 = m16 = m8 = m4 = m2 = m1 = false;
	
		if (h >= 8) {
			h8 = true;
			h -= 8;
		}
		if (h >= 4) {
			h4 = true;
			h -= 4;
		}
		if (h >= 2) {
			h2 = true;
			h -= 2;
		}
		if (h >= 1) {
			h1 = true;
			h -= 1;
		}
		if (m >= 32) {
			m32 = true;
			m -= 32;
		}
		if (m >= 16) {
			m16 = true;
			m -= 16;
		}
		if (m >= 8) {
			m8 = true;
			m -= 8;
		}
		if (m >= 4) {
			m4 = true;
			m -= 4;
		}
		if (m >= 2) {
			m2 = true;
			m -= 2;
		}
		if (m >= 1) {
			m1 = true;
			m -= 1;
		}
		
		if (h8)
			s[6][8] = 'o';
		else
			s[6][8] = ' ';
		if (h4)
			s[6][18] = 'o';
		else
			s[6][18] = ' ';
		if (h2)
			s[6][28] = 'o';
		else
			s[6][28] = ' ';
		if (h1)
			s[6][38] = 'o';
		else
			s[6][38] = ' ';
			
		if (m32)
			s[9][8] = 'o';
		else
			s[9][8] = ' ';
		if (m16)
			s[9][14] = 'o';
		else
			s[9][14] = ' ';
		if (m8)
			s[9][20] = 'o';
		else
			s[9][20] = ' ';
		if (m4)
			s[9][26] = 'o';
		else
			s[9][26] = ' ';
		if (m2)
			s[9][32] = 'o';
		else
			s[9][32] = ' ';
		if (m1)
			s[9][38] = 'o';
		else
			s[9][38] = ' ';
			
		for (int i=0; i<15; i++)
			cout << s[i] << "\n";
		cout << "\n";
	}


	return 0;
}
