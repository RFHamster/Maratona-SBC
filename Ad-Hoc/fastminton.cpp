#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool direita = false;
    bool esqueda = true;

    string s;

    cin >> s;
    int pontoDir = 0;
    int pontoEsq = 0;
    int gameDir = 0;
    int gameEsq = 0;
    bool winner = false;
    for(int i = 0; i<s.length();i++){
        char ganhador;
        if(s[i] == 'S'){
            if(direita){
                pontoDir++;
                direita = true;
                esqueda = false;
            }else{
                pontoEsq++;
                direita = false;
                esqueda = true;
            }
        }else if(s[i] == 'R'){
            if(!direita){
                pontoDir++;
                direita = true;
                esqueda = false;
            }else{
                pontoEsq++;
                direita = false;
                esqueda = true;
            }
        }else{
            if(winner){
                if(ganhador == 'd'){
                    cout << gameEsq << " - " << gameDir << " (winner)" << endl;
                }else{
                    cout << gameEsq << " (winner)" << " - " << gameDir <<  endl;
                }
            }else{
                if(direita){
                    cout << gameEsq << " (" << pontoEsq << ") - " << gameDir << " (" << pontoDir << "*)" << endl;
                }else{
                    cout << gameEsq << " (" << pontoEsq << "*) - " << gameDir << " (" << pontoDir << ")" << endl;
                }
            }
        }
        if(pontoDir == 10){
            gameDir++;
            pontoDir = 0;
            pontoEsq = 0;
        }
        if(pontoEsq == 10){
            gameEsq++;
            pontoDir = 0;
            pontoEsq = 0;
        }
        if(pontoDir >= 5 && pontoDir - pontoEsq >=2){
            gameDir++;
            pontoDir = 0;
            pontoEsq = 0;
        }
        if(pontoEsq >= 5 && pontoEsq - pontoDir>=2){
            gameEsq++;
            pontoDir = 0;
            pontoEsq = 0;
        }
        if(gameEsq == 2){
            winner = true;
            ganhador = 'e';
        }
        if(gameDir == 2){
            winner = true;
            ganhador = 'd';
        }
    }
    return 0;
}