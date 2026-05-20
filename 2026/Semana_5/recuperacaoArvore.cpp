#include <bits/stdc++.h>
using namespace std;

void posOrdem(string& pre, string& in, int preInicio, int inInicio, int tamanho) {
    if (tamanho == 0) return;

    char raiz = pre[preInicio];
   
    int posRaiz = inInicio;
    while (in[posRaiz] != raiz)
        posRaiz++;

    
    int tamEsq = posRaiz - inInicio;
    int tamDir = tamanho - tamEsq - 1;
    
    posOrdem(pre, in, preInicio + 1, inInicio, tamEsq);
    posOrdem(pre, in, preInicio + 1 + tamEsq, posRaiz + 1, tamDir);

    cout << raiz;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(1){
    
        string in, pre, pos;
        
        if(!(cin >> pre)) break; 

        cin >> in;

        int n = pre.size();

        posOrdem(pre, in, 0, 0, n);
        cout << endl;
    }
    return 0;
}