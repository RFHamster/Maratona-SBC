#include <bits/stdc++.h>

using namespace std;

bool ehPrimo(int x){
    if(x % 2 == 0){
        return false;
    }
    if(x == 3){
        return true;
    }
    for(int i = 3;i*i<=x;i+=2){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int soma = 0;
    int cont = 0;
    while(cont != 10){
        if(ehPrimo(n)){
            cont++;
            soma += n;
        }
        n++;
    }

    cout << soma << " km/h" << endl;
    long long int horas = 60000000/soma;
    long long int dias = horas/24;

    cout << horas << " h / " << dias << " d" << endl;

    return 0;
}