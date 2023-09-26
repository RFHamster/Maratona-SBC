#include <bits/stdc++.h>

using namespace std;

int main() {
    string str,s;

    while(cin >> str){
        cin >> s;
        int pos = 0;
        int index = 0;
        bool valida = false;
        while(index < str.length()){
            valida = false;
            for(int i = pos; i<s.length();i++){
                if(s[i] == str[index]){
                    pos = i;
                    index++;
                    valida = true;
                    break;
                }
            }
            if(!valida){
                cout << "nao" << endl;
                break;
            }
        }
        if(valida){
            cout << "sim" << endl;
        }
    }

    return 0;
}