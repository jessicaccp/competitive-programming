#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main () {
	int k, n, m, x, y, i, aux=1;

	while (aux==1) {
		scanf("%d", &k);
		if (k==0)
			break;
		scanf("%d %d", &n, &m);
		for (i=0; i<k; i++) {
			scanf("%d %d", &x, &y);
			if (x==n || y==m)
				printf("divisa\n");
			if (x<n && y>m)
				printf("NO\n");
			if (x>n && y>m)
				printf("NE\n");
			if (x<n && y<m)
				printf("SO\n");
			if (x>n && y<m)
				printf("SE\n");
		}
	}
	return 0;
}
