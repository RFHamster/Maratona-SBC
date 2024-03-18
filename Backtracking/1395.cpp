#include <bits/stdc++.h>

using namespace std;

int qntSolucao;

int main(){
    int T;
    int n;
    vector<int> N;
    int aux;
    vector<tuple<int,int,int,int>> solucao;
    while(cin >> T && T != 0){
        cin >> n;
        qntSolucao = n;
        while(n--){
            cin >> aux;
            N.emplace_back(aux);
        }

    }
    return 0;
}