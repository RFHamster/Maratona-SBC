#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int d, i,b;
        cin >> d >> i >> b;
        int ingredientes[100];
        int resultado = 0;
        for(int j = 0; j<i;j++){
            int ingrediente;
            cin >> ingrediente;
            ingredientes[j] = ingrediente;
        }
        while(b--){
            double total = 0;
            int num;
            cin >> num;
            while (num--){
                int qnt, ing;
                cin >> ing >> qnt;
                total += ingredientes[ing] * qnt;
            }
            int res = d/total;
            if(res > resultado){
                resultado = res;
            }
        }
        cout << resultado << endl;
    }
    return 0;
}