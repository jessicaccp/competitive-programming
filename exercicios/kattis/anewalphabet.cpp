#define __USE_MINGW_ANSI_STDIO 0
#include<bits/stdc++.h>

using namespace std;
void translate (char a) {
	if (a == 'a' or a == 'A')
		cout << "@";
	if (a == 'b' or a == 'B')
		cout << "8";
	if (a == 'c' or a == 'C')
		cout << "(";
	if (a == 'd' or a == 'D')
		cout << "|)";
	if (a == 'e' or a == 'E')
		cout << "3";
	if (a == 'f' or a == 'F')
		cout << "#";
	if (a == 'g' or a == 'G')
		cout << "6";
	if (a == 'h' or a == 'H')
		cout << "[-]";
	if (a == 'i' or a == 'I')
		cout << "|";
	if (a == 'j' or a == 'J')
		cout << "_|";
	if (a == 'k' or a == 'K')
		cout << "|<";
	if (a == 'l' or a == 'L')
		cout << "1";
	if (a == 'm' or a == 'M')
		cout << "[]\\/[]";
	if (a == 'n' or a == 'N')
		cout << "[]\\[]";
	if (a == 'o' or a == 'O')
		cout << "0";
	if (a == 'p' or a == 'P')
		cout << "|D";
	if (a == 'q' or a == 'Q')
		cout << "(,)";
	if (a == 'r' or a == 'R')
		cout << "|Z";
	if (a == 's' or a == 'S')
		cout << "$";
	if (a == 't' or a == 'T')
		cout << "']['";
	if (a == 'u' or a == 'U')
		cout << "|_|";
	if (a == 'v' or a == 'V')
		cout << "\\/";
	if (a == 'w' or a == 'W')
		cout << "\\/\\/";
	if (a == 'x' or a == 'X')
		cout << "}{";
	if (a == 'y' or a == 'Y')
		cout << "`/";
	if (a == 'z' or a == 'Z')
		cout << "2";
	if ((a<'a' or a>'z') and (a<'A' or a>'Z'))
		cout << a;
}

int main () {
	ios_base::sync_with_stdio(false);
	
	string a;
	getline(cin, a);
	int tam = a.size();
	
	for (int i=0; i<tam; i++) {
		translate(a[i]);
	}
	
	return 0;
}
