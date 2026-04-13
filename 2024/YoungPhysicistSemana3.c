#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int x, y, z;
    int Sx = 0, Sy = 0, Sz = 0;
    
    for(int i = 0; i < n; i++){

        scanf("%d %d %d", &x, &y, &z);

        Sx += x;
        Sy += y;
        Sz += z;

    }

    if(!Sx && !Sy && !Sz)
        printf("YES");
    else
        printf("NO");     



}