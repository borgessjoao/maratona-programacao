#include <bits/stdc++.h>
using namespace std;

struct No {
    int valor;
    No* esq;
    No* dir;
    No(int v) : valor(v), esq(nullptr), dir(nullptr) {}
};

No* inserir(No* raiz, int valor) {
    if (raiz == nullptr)
        return new No(valor);
    if (valor < raiz->valor)
        raiz->esq = inserir(raiz->esq, valor);
    else
        raiz->dir = inserir(raiz->dir, valor);
    return raiz;
}

void preOrdem(No* raiz) {
    if (raiz == nullptr) return;
    cout << raiz->valor << " ";  // raiz → esq → dir
    preOrdem(raiz->esq);
    preOrdem(raiz->dir);
}

void inOrdem(No* raiz) {
    if (raiz == nullptr) return;
    inOrdem(raiz->esq);
    cout << raiz->valor << " ";  // esq → raiz → dir
    inOrdem(raiz->dir);
}

void posOrdem(No* raiz) {
    if (raiz == nullptr) return;
    posOrdem(raiz->esq);
    posOrdem(raiz->dir);
    cout << raiz->valor << " ";  // esq → dir → raiz
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;
    for(int i = 1; i <= c; i++){
    
        No* raiz = nullptr;

        int n, x;
        cin >> n;
        while(n--){
            cin >> x;
            raiz = inserir(raiz, x);
        }

        cout << "Case " << i << ":\n";
        
        cout << "Pre.: "; preOrdem(raiz);  cout << "\n";
        cout << "In..: "; inOrdem(raiz);   cout << "\n";
        cout << "Post: "; posOrdem(raiz);  cout << "\n";
         
        cout << endl;
    }

    return 0;
}