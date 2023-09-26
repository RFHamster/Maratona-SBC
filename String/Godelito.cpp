#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    vector<int> vet;


    while(cin >> n){
        vet.emplace_back(n);
    }

    int max = 0;
    for (vector<int>::iterator it = vet.begin() ; it != vet.end(); ++it){
        if(max < *it){
            max = *it;
        }
    }

    vector<string> godelito;
    godelito.emplace_back("3");
    godelito.emplace_back("13");
    string godelitoAtual;
    for(int i = 1; i<max-1;i++){
        godelitoAtual = godelito[i];
        int pos = 0;
        int count = 1;
        int index = 1;
        string aux = "";
        while(index < godelitoAtual.length()){
            if(godelitoAtual[pos] == godelitoAtual[index]){
                count++;
            }else{
                aux += to_string(count) + godelitoAtual[pos];
                pos = index;
                count = 1;
            }
            index++;
        }
        aux += to_string(count) + godelitoAtual[pos];
        godelito.emplace_back(aux);
    }

    for (std::vector<int>::iterator it = vet.begin() ; it != vet.end(); ++it){
        cout << godelito[*it-1] << endl;
    }
        

    return 0;
}