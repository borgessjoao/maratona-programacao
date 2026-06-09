#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int dr[] = {-1, 1, 0, 0};
const int dc[] = {0, 0, -1, 1};

bool bfs(const vector<vector<int>>& labirinto) {
   
    if (labirinto[0][0] == 1 || labirinto[4][4] == 1) {
        return false;
    }
  
    vector<vector<bool>> visitado(5, vector<bool>(5, false));

    queue<pair<int, int>> q;

    q.push({0, 0});
    visitado[0][0] = true;

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        if (r == 4 && c == 4) {
            return true;
        }

        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < 5 && nc >= 0 && nc < 5) {
                if (labirinto[nr][nc] == 0 && !visitado[nr][nc]) {
                    visitado[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }

    return false;
}

void resolve_caso() {
    vector<vector<int>> labirinto(5, vector<int>(5));

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> labirinto[i][j];
        }
    }

    if (bfs(labirinto)) {
        cout << "COPS" << "\n";
    } else {
        cout << "ROBBERS" << "\n";
    }
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