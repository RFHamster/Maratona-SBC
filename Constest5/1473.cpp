#include <bits/stdc++.h>

using namespace std;

int main(){
    int linha;
    int coluna;
    vector<int> limitesInf;
    vector<int> limitesSup;
    bool flag;

    while(cin >> linha){
        cin >> coluna;
        flag = false;
        int matriz[linha][coluna];

        limitesInf.clear();
        limitesSup.clear();
        for(int i = 0; i <linha; i++){
        limitesInf.emplace_back((coluna * i));
        limitesSup.emplace_back(limitesInf[i] + coluna);
    }


    }
    return 0; 
}