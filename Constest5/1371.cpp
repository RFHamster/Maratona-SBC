#include <bits/stdc++.h>

using namespace std;

vector<long long int> quadradosPerfeitos;

void preencheQP(){
    for(int i = 1; i<=5001;i++){
        quadradosPerfeitos.emplace_back(i*i);
    }
}


int main(){
    preencheQP();
    
    int n;
    int i;
    while(cin >> n && n != 0){
        i = 0;
        while(1){
            cout << quadradosPerfeitos[i];
            i++;
            if(quadradosPerfeitos[i] <= n){
                cout << " ";
            }else{
                break;
            }
        } 
        cout << "\n";
    }
    
    return 0;
}