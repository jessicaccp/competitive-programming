#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, a1, a2, a3, a4, a5, aux=1, cont, i;
	char resp[256];

	while (aux==1) {
		scanf("%d", &n);
		if (n==0)
			break;
		for (i=0; i<n; i++) {
			scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
			cont = 0;
			if (a1<128)
				cont = cont +1;
			if (a2<128)
				cont = cont +1;
			if (a3<128)
				cont = cont +1;
			if (a4<128)
				cont = cont +1;
			if (a5<128)
				cont = cont +1;
			if (cont>1)
				resp[i]='*';
			else {
				if (a1<128)
					resp[i]='A';
				if (a2<128)
					resp[i]='B';
				if (a3<128)
					resp[i]='C';
				if (a4<128)
					resp[i]='D';
				if (a5<128)
					resp[i]='E';
				if ((a1>127) && (a2>127) && (a3>127) && (a4>127) && (a5>127))
					resp[i]='*';
			}
		}
		for (i=0; i<n; i++)
			printf("%c\n", resp[i]);
	}
	return 0;
}
