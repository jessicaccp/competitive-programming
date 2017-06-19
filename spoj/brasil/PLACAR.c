#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main () {
	FILE *arquivo;
	char nome[21], reprovado[21];
	int questoes, aux=1, cont=1, k, i, menor=11, contador;

	while ((scanf("%d", &k)) != EOF) {
		for (i=0; i<k; i++) {
			scanf("%s %d", nome, &questoes);
			if (questoes<menor) {
				menor = questoes;
				strcpy(reprovado, nome);
			}
			else {
				if (questoes==menor) {
					contador = strcmp(nome, reprovado);
					if (contador>0)
						strcpy(reprovado, nome);
				}
			}
		}
		printf("Instancia %d\n%s\n\n", cont, reprovado);
		cont++;
		menor = 11;
	}
	return 0;
}
