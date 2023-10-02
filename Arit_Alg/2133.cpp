#include <bits/stdc++.h>

using namespace std;

vector<int> primos;

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

void preencheVetor(){
    primos.emplace_back(2);
    for(int i = 3; i <= 1048573;i += 2){
        if(ehPrimo(i)){
            primos.emplace_back(i);
        }
    }
}

int main(){
    preencheVetor();

    int n;
    int i = 0;
    int flag;
    int flag2;
    int flag3;
    int cont;
    int caso = 1;
    int acerto;
    while(cin >> n){
        i = 0;
        flag = 0;
        flag2 = 0;
        flag3 = 0;
        acerto = 0;
        while(n>1){
            cont = 0;
            while(true){
                if(n % primos[i] == 0){
                    n = n/primos[i];
                    cont++;
                }else{
                    break;
                }
            }
            if(cont >= 9){
                acerto = 1;
                break;
            }
            if(cont > 0){
                flag2++;
            }
            if(cont >= 2){
                flag++;
            }
            if(cont >= 5){
                flag3++;
            }
            if(flag >= 2 || flag2>=4){
                acerto = 1;
                break;
            }
            if(flag2 >= 2 && flag3 >= 1){
                acerto = 1;
                break;
            }
            if(flag2 >= 3 && flag >= 1){
                acerto = 1;
                break;
            }
            
            i++;
        }

        cout << "Instancia " << caso << endl;
        if(acerto == 1){
            cout << "sim\n" << endl;
        }else{
            cout << "nao\n" << endl;
        }
        caso++;
    }

    return 0;
}