#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // descarta o '\n' que sobra depois do cin >> n

    while (n--) {
        string linha;
        getline(cin, linha); // lê a linha inteira

        set<string> s;
        stringstream ss(linha); // quebra a linha em palavras
        string palavra;

        while (ss >> palavra) {
            s.insert(palavra);
        }

        bool primeiro = true;
        for (string x : s) {
            if (!primeiro) cout << " ";
            cout << x;
            primeiro = false;
        }
        cout << "\n";
    }

    return 0;
}