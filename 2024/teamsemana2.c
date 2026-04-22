#include <stdio.h>

int main(){

    int n, opniao, resultado = 0, i, pre = 0;

    scanf("%d", &n);

    while(n > 0){

            for(i = 0; i < 3; i++){
               scanf(" %d", &opniao);

            if(opniao == 1)
            pre++;
            
            }

        if(pre > 1)
        resultado++;
        
        
        pre = 0;
        n--;
    }


    
    
    printf("%d", resultado);
    
    return 0;
}