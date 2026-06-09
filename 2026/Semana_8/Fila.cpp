#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> fila_original(N);
    for (int i = 0; i < N; ++i) {
        cin >> fila_original[i];
    }

    int M;
    cin >> M;

    unordered_set<int> sairam;
    for (int i = 0; i < M; ++i) {
        int id;
        cin >> id;
        sairam.insert(id);
    }

    bool primeiro = true;
 
    for (int i = 0; i < N; ++i) {
        int pessoa_atual = fila_original[i];
        
      
        if (sairam.find(pessoa_atual) == sairam.end()) {
            if (!primeiro) {
                cout << " ";
            }
            cout << pessoa_atual;
            primeiro = false;
        }
    }
    
    cout << "\n";

    return 0;
}