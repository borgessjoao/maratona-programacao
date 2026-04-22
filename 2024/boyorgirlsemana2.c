#include <stdio.h>

void checar(char frase[]);

int main(){

char frase[100];
int i = 0;
 
while((frase[i] = getchar()) != EOF)    
    i++;

    frase[i] = '\0';

    checar(frase);

    return 0;
}

void checar(char frase[]){

    int contador = 0;
    int x = 0;
   
   
    for(int i = 0; frase[i] !='\0'; i++){
        for(int j = 0; j < i; j++){
            if(frase[i] == frase[j]){
                x++;
                break;}
        }
        
        
        if(!x)
            contador++;
    
        x = 0;
    }

    if(contador % 2)
        printf("IGNORE HIM!");

    else
        printf("CHAT WITH HER!");

}
