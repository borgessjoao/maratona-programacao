#include <stdio.h>

int main(){

    int alturacerca, n, alturamigo, largura = 0;

    scanf("%d %d", &n, &alturacerca);
    
    while(n > 0){

        scanf(" %d", &alturamigo);

        if(alturamigo > alturacerca)
        largura += 2;

        else
        largura++;

        n--;
    }


    printf("%d", largura);



    return 0;
}   