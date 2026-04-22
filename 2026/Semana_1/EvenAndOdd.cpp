#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> pares;
    vector<int> impares;
    
    while(n--){

        int numero;

        cin >> numero;

        if(numero % 2)
            impares.push_back(numero);
        else
            pares.push_back(numero);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), greater<int>());

    for(int par: pares)
        cout << par << "\n";
    for(int impar: impares)
        cout << impar << "\n";

    return 0;
}