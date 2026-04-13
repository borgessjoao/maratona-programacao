#include <stdio.h>

void preenchermatriz(int matriz[][10], int n);

int main(void){

    int n;

    scanf("%d", &n);

    int matriz[10][10];

    preenchermatriz(matriz, n);

    printf("%d", matriz[n-1][n-1]);

    return 0;

}

void preenchermatriz(int matriz[][10], int n){

    for(int i = 0; i < n; i++){
        matriz[i][0] = 1;
        matriz[0][i] = 1;
    }

    for(int i = 1; i < n; i++)
        for(int j = 1; j < n; j++)
            matriz[i][j] =  matriz[i - 1][j] +  matriz[i][j - 1];


}