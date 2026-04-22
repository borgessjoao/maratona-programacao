#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    int numero = n;

    int qtd[7] = {0};
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    qtd[0] = n / 100; n %= 100;
    qtd[1] = n / 50;  n %= 50;
    qtd[2] = n / 20;  n %= 20;
    qtd[3] = n / 10; n %= 10;
    qtd[4] = n / 5;  n %= 5;
    qtd[5] = n / 2;  n %= 2;
    qtd[6] = n / 1; 
    
    cout << numero << "\n";

    for(int i = 0; i < 7; i++)
        cout << qtd[i] << " nota(s) de R$ " << notas[i] << ",00\n";

    return 0;
}