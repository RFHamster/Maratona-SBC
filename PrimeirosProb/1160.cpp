#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i<n;i++){
        int PA,PB;
        double CA,CB;
        cin >> PA;
        cin >> PB;
        cin >> CA;
        cin >> CB;
        int cont = 0;
        while(PA<=PB && cont <= 100){
            PA += PA * CA/100;
            PB += PB * CB/100;
            cont++;
        }
        if(cont > 100){
            cout << "Mais de 1 seculo." << endl;
            
        }else{
            cout << cont << " anos." << endl;
        }

    }

    return 0;
}