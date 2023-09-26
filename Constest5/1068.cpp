#include <bits/stdc++.h>
using namespace std;
int main (){
    int cont = 0;
    string s;
    while(cin >> s){
        cont = 0;
        for(char c : s){
            if(c == '('){
                cont++;
            }else if(c == ')'){
                if(cont == 0){
                    cont = -1;
                    break;
                }
                cont--;
            }
        }
        if(cont == 0){
            cout << "correct" << endl;
        }else{
            cout << "incorrect" << endl;
        }
    }
    return 0;  
}