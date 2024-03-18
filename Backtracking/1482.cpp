#include <bits/stdc++.h>

using namespace std;

int MAX_MIN = 420;
int museus[20];
int distancias[20][20];
int contGeral;
int n;

bool flag;

void visitar(int num,long long int mask, int horas, int contador){
    contGeral = max(contGeral,contador);
    if(contGeral == n){
        flag = true;
        return;
    }   
    horas += museus[num];
    if(horas > MAX_MIN){
        return;
    }
    mask = mask | 1 << num;
    contador++;
    for(int i = 0; i<n;i++){
        if(!(mask & (1<<i))){
            visitar(i,mask,horas,contador);
        }
        if(flag){
            return;
        }
    }
}


void qntMuseus(int inicial, long long int mask){
    int horas = museus[inicial];
    if(horas > MAX_MIN){
        return;
    }
    for(int i = 0; i <n;i++){
        visitar(i,mask | 1 << inicial,horas,1);
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
    while(cin >> n && n != 0){
        for(int i = 0; i < n;i++){
            cin >> museus[i];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> distancias[i][j];
            }
        }
        contGeral = 0;
        flag = false;
        for(int i = 0; i<n;i++){
            qntMuseus(i,0);
            if(flag){
                break;
            }
        }
        std::cout << contGeral << endl;
    }
    return 0;
}