#include <bits/stdc++.h>
    
using namespace std;
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int flor;
    int abelha;
    cin >> flor;
    cin >> abelha;
    int maxValue = 1000001;

    vector<int> flores;
    flores.assign(maxValue,0);
    for(int i = 0;i<flor;i++){
        int n;
        cin >> n;
        flores[n] += 1;
    }

    int total;
    int valor;
    while(maxValue >= 0){
        valor = flores[maxValue];
        if(valor == 0){
            maxValue--;
            continue;
        }
        string stringValue = to_string(maxValue);
        total = 0;
        for(char c : stringValue){
            total += c - '0';
        }
        abelha -= valor;
        flores[maxValue-total] += valor;
        if(abelha <= 0){
            break;
        }
        maxValue--; 
    }
    
    cout << total << endl;
    
    
    return 0;
}