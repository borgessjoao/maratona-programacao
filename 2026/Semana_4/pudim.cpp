#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string busca, artigo;
    cin >> busca >> artigo;

    int n = busca.size();
    int m = artigo.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){

            if(busca[i-1] == artigo[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            
        }
    }

    cout << dp[n][m] << "\n";

    return 0;
}