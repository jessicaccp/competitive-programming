#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main () {
    int mat[1001][1001], n, m, i, j;

    scanf("%d %d", &n, &m);

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf(" %d", &mat[i][j]);
        }
    }

    for (i=1; i<n-1; i++) {
        for (j=1; j<m-1; j++) {
            if (mat[i][j]==42 && mat[i-1][j-1]==7 && mat[i-1][j]==7 && mat[i-1][j+1]==7 && mat[i][j-1]==7 && mat[i][j+1]==7 && mat[i+1][j-1]==7 && mat[i+1][j]==7 && mat[i+1][j+1]==7) {
                printf("%d %d\n", i+1, j+1);
                return 0;
            }
        }
    }

    printf("0 0\n");

    return 0;
}
