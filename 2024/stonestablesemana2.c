#include <stdio.h>

//programa visa checar numero minimo de itens a serem retirados do vetor a fim de que não hajam itens iguais colados.

void checarfila(int n, char fila[]);
void reposicionar(int n, char fila[], int indice);

int main(){

int n;

scanf("%d", &n);

char fila[50];

for(int i = 0; i < n; i++)
    scanf(" %c", &fila[i]);


checarfila(n, fila);

    return 0;
}


void reposicionar(int n, char fila[], int indice){
    
    for(int i = indice; i < n - 1; i++)
        fila[i] = fila[i + 1];        
}


void checarfila(int n, char fila[]){

int minimo = 0;
   
int i = 1; 

    while (i < n) {
        if (fila[i] == fila[i - 1]) {
            reposicionar(n, fila, i);  
            minimo++;
            n--;  
        } else {
            i++;  
        }
    }

    printf("%d", minimo);

}