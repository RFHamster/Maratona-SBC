#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char,int> valores;

    int i=1;
    char c = 'a';
    while(i<27){
        valores[c] = i;
        c++;
        i++;
    }
    c='A';
    while(i<53){
        valores[c] = i;
        c++;
        i++;
    }

    string s;
    while(cin >> s){
        int soma = 0;

        for(i = 0; i<s.length();i++){
            soma += valores[s[i]];
        }

        bool valida = true;
        for(i = 2; i<=soma/2;i++){
            if(soma%i == 0){
                valida = false;
            }
        }
        if(valida){
            cout << "It is a prime word." << endl;
        }else{
            cout << "It is not a prime word." << endl;
        }
    }
    
    return 0;
}