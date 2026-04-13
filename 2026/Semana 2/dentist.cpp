#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<pair<int,int>> consultas_in;

    while(n--){

        int x, y;

        cin >> x >> y;

        pair<int,int> temp = {x,y};

        consultas_in.push_back(temp);
                 
    }
   
    sort(consultas_in.begin(), consultas_in.end(), [](auto a, auto b){
        return a.second < b.second;
    });

    int count = 0;
    int fim_atual = -1; // fim da última consulta aceita

    for(auto consulta : consultas_in){
        if(consulta.first >= fim_atual){ // não conflita
            count++;
            fim_atual = consulta.second; // atualiza o fim
        }
    }

    cout << count;

    return 0;
}