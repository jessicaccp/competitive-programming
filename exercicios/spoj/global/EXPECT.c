#include <stdio.h>

int main () {
	int a;

	while (scanf("%d", &a) != EOF) {
		printf("%d\n", a);
		fflush(stdout);
		if (a==42)
			return 0;
	}

	return 0;
}
