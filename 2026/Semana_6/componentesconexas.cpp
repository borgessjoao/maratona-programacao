#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


void dfs(int u, const vector<vector<int>>& adj, vector<bool>& visitado, vector<char>& componente) {
    visitado[u] = true;
    componente.push_back((char)(u + 'a')); 

    for (int v : adj[u]) {
        if (!visitado[v]) {
            dfs(v, adj, visitado, componente);
        }
    }
}

void resolve_caso(int caso) {
    int V, E;
    cin >> V >> E;

    
    vector<vector<int>> adj(V);

    for (int i = 0; i < E; ++i) {
        char u_char, v_char;
        cin >> u_char >> v_char;
        
        
        int u = u_char - 'a';
        int v = v_char - 'a';
        
      
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visitado(V, false);
    int qtd_componentes = 0;

    cout << "Case #" << caso << ":" << endl;

  
    for (int i = 0; i < V; ++i) {
        if (!visitado[i]) {
            vector<char> componente;
            
          
            dfs(i, adj, visitado, componente);
            
            
            sort(componente.begin(), componente.end());
            
            
            for (char c : componente) {
                cout << c << ",";
            }
            cout << endl;

            qtd_componentes++;
        }
    }

    cout << qtd_componentes << " connected components" << endl << endl;
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) {
        resolve_caso(i);
    }

    return 0;
}