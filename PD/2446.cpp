#include <bits/stdc++.h>

using namespace std;

vector<int> moedas;
int quant[1000000];
int ultima[1000000];


void MakeChange(int troco){ // moedas: vetor de moedas disponíveis (menor é de 1 centavo)
  quant[0] = 0; // solução ótima para troco de valor 0
  ultima[0] = 0; // última moeda dessa solução
  for (int cents = 1; cents <= troco; cents++) {
     int quantProv = cents; // solução provisória: todas de 1 centavo
     int ultProv = 1; // última moeda dessa solução
     for (int j = 0; j < moedas.size(); j++) {
        if (moedas[j] > cents) continue; // essa moeda não serve
        if (quant[cents - moedas[j]] + 1 <= quantProv) {
          quantProv = quant[cents - moedas[j]] + 1;
          ultProv = moedas[j];
     }}
     quant[cents] = quantProv; // solução para troco=cents
     ultima[cents] = ultProv; // última moeda dessa solução
}}

int main(){
    moedas.clear();
    int j,m;
    cin >> m >> j;
    while(j--){
        int moeda;
        if(moeda>m){
            continue;
        }else if(moeda == m){
            cout << "S" << endl;
            return;
        }
        cin >> moeda;
        moedas.emplace_back(moeda);
    }
    MakeChange(m);
    cout << quant[m] << endl;
    return 0;
}