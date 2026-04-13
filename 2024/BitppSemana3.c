#include <stdio.h>

int main(){

    
    int n, x = 0;
    int controle = 0;
    scanf("%d ", &n);

    char c;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            scanf("%c", &c);
            if(c == '+')
                controle++;
            if(c == '-')
                controle += 5;
        }

        getchar();

        if(controle == 2)
            x++;
        else if(controle == 10)
            x--;

        controle = 0;
    }

    
    printf("%d", x);

    return 0;
}