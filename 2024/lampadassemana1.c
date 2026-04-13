#include <stdio.h>

int main(){

    int inter, i, l1 = 0, l2 = 0;

    scanf("%d", &i);

    while(i > 0){

        scanf(" %d", &inter);

        if(inter == 1)
        {
            if(l1 == 0)
            l1 = 1;

            else if(l1 == 1)
            l1 = 0;
        }

        else if(inter == 2){
            
            if(l2 == 0)
            l2 = 1;

            else if(l2 == 1)
            l2 = 0;
        }

        i--;
    }


    printf("%d\n%d",l1, l2);













    return 0;
}