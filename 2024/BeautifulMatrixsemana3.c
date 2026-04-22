#include <stdio.h>

int main(void){

    int p;
    int posicao[2];
    
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &p);
            if(p){
                posicao[0] = i;
                posicao[1] = j; 
            }
        }
    }

        int resultadox = posicao[0] - 2; 
        int resultadoy = posicao[1] - 2;

        if(resultadox < 0)
            resultadox *= -1;

        if(resultadoy < 0)
            resultadoy *= -1;

        
        printf("%d", resultadox + resultadoy);

}