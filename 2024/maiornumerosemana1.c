#include <stdio.h>

int main()
{

    int entrada, resultado = 0;


    while(1){

        scanf(" %d", &entrada);

        if(entrada == 0)
        break;

        if(entrada > resultado)
        resultado = entrada;
    }

    printf("%d", resultado);







    return 0;
}