#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    while(n--){

        int m;
        
        cin >> m;
        
        vector<pair<int,int>> alunos(m);
        
        for(int i = 0; i < m; i++){
            cin >> alunos[i].first;
            alunos[i].second = i;
        }

        sort(alunos.begin(), alunos.end(), greater<pair<int,int>>());

        int count = 0;

        for(int i = 0; i < (int)alunos.size(); i++){
            if(alunos[i].second == i)
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}