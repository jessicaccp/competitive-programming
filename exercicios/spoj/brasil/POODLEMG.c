#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int n, p, letras, aux=1;

	while (aux=1) {
		scanf("%d %d", &n, &p);
		if ((n==0) && (p==0))
			break;
		letras = n/p;
		if ((n%p)!=0)
			letras = letras +1;
		if (letras<7)
			printf("Poodle\n");
		if (letras==7)
			printf("Pooodle\n");
		if (letras==8)
			printf("Poooodle\n");
		if (letras==9)
			printf("Pooooodle\n");
		if (letras==10)
			printf("Poooooodle\n");
		if (letras==11)
			printf("Pooooooodle\n");
		if (letras==12)
			printf("Poooooooodle\n");
		if (letras==13)
			printf("Pooooooooodle\n");
		if (letras==14)
			printf("Poooooooooodle\n");
		if (letras==15)
			printf("Pooooooooooodle\n");
		if (letras==16)
			printf("Poooooooooooodle\n");
		if (letras==17)
			printf("Pooooooooooooodle\n");
		if (letras==18)
			printf("Poooooooooooooodle\n");
		if (letras==19)
			printf("Pooooooooooooooodle\n");
		if (letras>19)
			printf("Poooooooooooooooodle\n");
	}

	return 0;
}
