#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define pi 3.14159

int main () {
    int n;
    char jog1[20], jog2[20];

    while (scanf("%d", &n) != EOF) {
        while (n--) {
            scanf("%s %s", &jog1, &jog2);
            if (strcmp(jog1, "ataque") == 0)
                if (strcmp(jog2, "ataque") == 0)
                    printf("Aniquilacao mutua\n");
                else
                    printf("Jogador 1 venceu\n");
            else
                if (strcmp(jog1, "pedra") == 0)
                    if (strcmp(jog2, "pedra") == 0)
                        printf("Sem ganhador\n");
                    else
                        if (strcmp(jog2, "papel") == 0)
                            printf("Jogador 1 venceu\n");
                        else
                            printf("Jogador 2 venceu\n");
                else
                    if (strcmp(jog2, "ataque") == 0)
                        printf("Jogador 2 venceu\n");
                    else
                        if (strcmp(jog2, "papel") == 0)
                            printf("Ambos venceram\n");
                        else
                            printf("Jogador 2 venceu\n");

        }
    }

    return 0;
}
