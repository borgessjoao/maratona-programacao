#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, P;

    while(cin >> N >> P && N){

        vector<pair<int,int>> pedidos(N);

        for(int i = 0; i < N; i++)
            cin >> pedidos[i].first >> pedidos[i].second; 

        vector<vector<int>> dp(N + 1, vector<int>(P + 1, 0));

        for(int i = 1; i <= N; i++){
            int tempo  = pedidos[i-1].first;
            int pizzas = pedidos[i-1].second;

            for(int j = 0; j <= P; j++){
                
                dp[i][j] = dp[i-1][j];

                
                if(j >= pizzas)
                    dp[i][j] = max(dp[i][j], dp[i-1][j - pizzas] + tempo);
            }
        }

        cout << dp[N][P] << " min.\n";
    }

    return 0;
}