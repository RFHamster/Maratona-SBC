#include <bits/stdc++.h>

using namespace std;

map<int,int> cartasQnt;
map<int,int> cartasValor;

void init(){
    for(int i = 1; i < 14;i++){
        cartasQnt[i] = 4;
        if(i <= 10){
            cartasValor[i] = i;
        }else{
            cartasValor[i] = 10;
        }
    }
}

int main(){
    init();
    int joao = 0;
    int maria = 0;

    int n;
    cin >> n;
    int aux;

    for(int i = 0; i < 2; i++){
        cin >> aux;
        cartasQnt[aux]--;
        joao += cartasValor[aux];
    }

    for(int i = 0; i < 2; i++){
        cin >> aux;
        cartasQnt[aux]--;
        maria += cartasValor[aux];
    }

    int commom = 0;
    while(n--){
        cin >> aux;
        cartasQnt[aux]--;
        commom+=cartasValor[aux];
    }

    maria += commom;
    joao += commom;

    int cartaMenor = -1;

    int cartaMaria = 23 - maria;
    int cartaJoao = 24 - joao;  

    if(cartaMaria < 10){
        if(cartasQnt[cartaMaria] > 0){
            cartaMenor = cartaMaria;
        }
    }
    if(cartaMaria == 10){
        for(int j = 10; j<=13;j++){
            if(cartasQnt[j] > 0){
                cartaMenor = j;
                break;
            }
        }
    }

    if(joao > maria){
        if(cartaJoao <= 10){
            for(int i = cartaJoao; i < 14;i++){
                if((maria+cartasValor[i]) >= 23){
                    break;
                }
                if(cartasQnt[i] > 0){
                    cartaMenor = i;
                    break;
                }
            }
        }
    }
    cout << cartaMenor << endl;
    
    
    return 0;
}