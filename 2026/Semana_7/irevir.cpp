#include <iostream>
#include <vector>

using namespace std;

void dfs(int u, const vector<vector<int>>& grafo, vector<bool>& visitado, int& cont) {
    visitado[u] = true;
    cont++; 

    for (int v : grafo[u]) {
        if (!visitado[v]) {
            dfs(v, grafo, visitado, cont);
        }
    }
}

void resolve_caso(int N, int M) {
  
    vector<vector<int>> grafo_original(N);
    vector<vector<int>> grafo_transposto(N);

    for (int i = 0; i < M; ++i) {
        int u, v, p;
        cin >> u >> v >> p;
        
      
        u--; v--;

        if (p == 1) {
            // Mão única: u -> v
            grafo_original[u].push_back(v);
            grafo_transposto[v].push_back(u);
        } else {
            // Mão dupla: u -> v e v -> u
            grafo_original[u].push_back(v);
            grafo_original[v].push_back(u);
            grafo_transposto[u].push_back(v);
            grafo_transposto[v].push_back(u);
        }
    }

  
    vector<bool> visitado_orig(N, false);
    int cont_orig = 0;
    dfs(0, grafo_original, visitado_orig, cont_orig);

    
    if (cont_orig != N) {
        cout << 0 << "\n";
        return;
    }

   
    vector<bool> visitado_trans(N, false);
    int cont_trans = 0;
    dfs(0, grafo_transposto, visitado_trans, cont_trans);

  
    if (cont_trans == N) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    while (cin >> N >> M && (N != 0 || M != 0)) {
        resolve_caso(N, M);
    }

    return 0;
}