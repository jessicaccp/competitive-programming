#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	char vencedor[15];
	int a, b;

	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[0]='A';
	else
		vencedor[0]='B';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[1]='C';
	else
		vencedor[1]='D';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[2]='E';
	else
		vencedor[2]='F';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[3]='G';
	else
		vencedor[3]='H';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[4]='I';
	else
		vencedor[4]='J';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[5]='K';
	else
		vencedor[5]='L';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[6]='M';
	else
		vencedor[6]='N';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[7]='O';
	else
		vencedor[7]='P';
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[8]=vencedor[0];
	else
		vencedor[8]=vencedor[1];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[9]=vencedor[2];
	else
		vencedor[9]=vencedor[3];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[10]=vencedor[4];
	else
		vencedor[10]=vencedor[5];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[11]=vencedor[6];
	else
		vencedor[11]=vencedor[7];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[12]=vencedor[8];
	else
		vencedor[12]=vencedor[9];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[13]=vencedor[10];
	else
		vencedor[13]=vencedor[11];
	scanf("%d %d", &a, &b);
	if (a>b)
		vencedor[14]=vencedor[12];
	else
		vencedor[14]=vencedor[13];
	printf("%c", vencedor[14]);

	return 0;
}
