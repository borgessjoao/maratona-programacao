#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    while(cin >> n) {        // tenta ler N — para no EOF
        int custo;
        cin >> custo;

        vector<int> receitas(n);
        for(int i = 0; i < n; i++){
            cin >> receitas[i];
            receitas[i] -= custo;
        }
        
        int melhor = 0,
        atual = 0;

        for(auto numero: receitas){
            atual = max(numero, atual + numero);
            melhor = max(melhor, atual);
        }

        cout << melhor << "\n";
    }        

    return 0;
}