#include <bits/stdc++.h>
using namespace std;

unsigned long long fibonacci(long long n, vector<pair<unsigned long long, bool>>& sequencia);

int main(){

    int n;

    cin >> n;

    vector<pair<unsigned long long, bool>> sequencia(61);
    
    while(n--){
        int numero;

        cin >> numero;

        cout << "Fib(" << numero << ") = " << fibonacci(numero, sequencia) << "\n";
    }

    return 0;
}

unsigned long long fibonacci(long long n, vector<pair<unsigned long long, bool>>& sequencia){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    if(sequencia[n].second)
        return sequencia[n].first;

    sequencia[n].first = fibonacci(n - 1, sequencia) + fibonacci(n - 2, sequencia);
    sequencia[n].second = true;
    return sequencia[n].first;
}