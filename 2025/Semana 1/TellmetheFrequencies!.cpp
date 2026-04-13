#include <bits/stdc++.h>
using namespace std;

int main(){

    string linha;
    bool primeiro = true; // controla a linha em branco entre outputs

    while(getline(cin, linha)){

        map<char, int> freq;

        for (char c : linha)
            freq[c]++;

        // joga os pares {frequencia, ascii} num vector para ordenar
        vector<pair<int,int>> v;
        for (auto par : freq) {
            v.push_back({par.second, (int)par.first});
        }

        // ordena por frequência crescente, empate: ASCII maior primeiro
        sort(v.begin(), v.end(), [](auto a, auto b){
            if (a.first != b.first)
                return a.first < b.first;
            return a.second > b.second;
        });

        // imprime linha em branco entre cada bloco (não antes do primeiro)
        if (!primeiro) cout << "\n";
        primeiro = false;

        for (auto par : v) {
            cout << par.second << " " << (char)par.second << " " << par.first << "\n";
        }
    }

    return 0;
}