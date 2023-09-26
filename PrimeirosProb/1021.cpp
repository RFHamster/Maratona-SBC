#include <bits/stdc++.h>

using namespace std;

int main(){
    double N;
    int aux, aux1;
    vector<int> notas = {2,5,10,20,50,100};
    vector<int> moedas = {1,5,10,25,50};


    cin >> N;

    aux = N;
    N = 100*N;
    aux1 = N - aux*100;
    
    cout << "NOTAS:\n";
    while(!notas.empty()){
        int atual = notas.back();
        notas.pop_back();
        cout << aux/atual << " nota(s) de R$ " << atual << ".00\n";
        aux = (aux%atual);
    }
    cout << "MOEDAS:\n";
    cout << aux << " moeda(s) de R$ 1.00\n";

    while(!moedas.empty()){
        int atual2 = moedas.back();
        moedas.pop_back();
        cout << aux1/atual2 << " moeda(s) de R$ 0." << std::setw(2) << std::setfill('0') << atual2 << "\n";
        aux1 = (aux1%atual2);
    }

    return 0;
}