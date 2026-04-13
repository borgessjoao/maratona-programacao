#include <bits/stdc++.h>
using namespace std;

int main(){

    while(1){
    
        int n, d;

        cin >> n >> d;

        if(n == 0 && d == 0)
            break;

        string numero;
        cin >> numero;

        string resultado;
        int removidos = 0;

        for(char c : numero){
            while(removidos < d && !resultado.empty() && resultado.back() < c){
                resultado.pop_back();
                removidos++;
            }
            resultado.push_back(c);
        }

        // se ainda precisar remover, tira do final
        while(removidos < d){
            resultado.pop_back();
            removidos++;
        }

        cout << resultado << "\n";
    } 
    
    return 0;
}