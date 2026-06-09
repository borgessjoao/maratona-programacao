#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

void resolve_caso() {
    int nodo_inicio;
    cin >> nodo_inicio;

    int V, E;
    cin >> V >> E;

    set<pair<int, int>> arestas_unicas;

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;

        int menor = min(u, v);
        int maior = max(u, v);

        arestas_unicas.insert({menor, maior});
    }

    int movimentos = arestas_unicas.size() * 2;

    cout << movimentos << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T) {
        while (T--) {
            resolve_caso();
        }
    }

    return 0;
}