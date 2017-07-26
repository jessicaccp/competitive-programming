#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int h1, m1, h2, m2, aux=1, horas=0, minutos=0;

	while (aux==1) {
		horas = 0; minutos = 0;
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		if ((h1==0) && (h2==0) && (m1==0) && (m2==0))
			break;
		if ((h1==h2) && (m1==m2))
			horas = 24;
		if ((h1==h2) && (m1<m2))
			minutos = m2-m1;
		if ((h1==h2) && (m1>m2)) {
			horas = 23; minutos = 60-m1+m2; }
		if ((h1<h2) && (m1==m2))
			horas = h2-h1;
		if	((h1<h2) && (m1<m2)) {
			horas = h2-h1; minutos = m2-m1; }
		if ((h1<h2) && (m1>m2)) {
			horas = h2-h1-1; minutos = 60-m1+m2; }
		if ((h1>h2) && (m1==m2))
			horas = 24-h1+h2;
		if ((h1>h2) && (m1<m2)) {
			horas = 24-h1+h2; minutos = m2-m1; }
		if ((h1>h2) && (m1>m2)) {
			horas = 24-h1+h2-1; minutos = 60-m1+m2; }

		printf("%d\n", (horas*60)+minutos);
	}

	return 0;
}
