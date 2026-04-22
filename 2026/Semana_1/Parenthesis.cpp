#include <bits/stdc++.h>
using namespace std;

int main(){

    string linha; 
    
    while(getline(cin, linha)){

        stack<int> pilha;

        bool correto = true;

       for(char x: linha){
            if(x == '(')
                pilha.push(1);
            if(x == ')' && pilha.size())
                pilha.pop();
            else if(x == ')'){
                correto = false;
                break;
            }
       }
       (correto && pilha.empty()) ? cout << "correct\n" : cout << "incorrect\n";
    }

    return 0;
}