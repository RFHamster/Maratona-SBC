#include <bits/stdc++.h>

using namespace std;

int main (){
    string n,m;
    int cont;
    cin >> n >> m;
    while(n!="0" || m!="0"){
        int size = n.size();
        int carry = 0;
        cont = 0;

        reverse(n.begin(),n.end());
        reverse(m.begin(),m.end());

        if(n.size()<=m.size()){
            size = m.size();
        }

        for(int i = 0; i<size;i++){
            int num1 = 0;
            int num2 = 0;
            if(i<n.size()){
                num1 = n[i] - '0';
            }
            if(i<m.size()){
                num2 = m[i] - '0';
            }
            int total = num1 + num2 + carry;
            if(total >= 10){
                cont++;
                carry = 1;
            }else{
                carry = 0;
            }
        }
        if(cont == 0){
            cout << "No carry operation." << endl;
        }else if(cont == 1){
            cout << cont << " carry operation." << endl;
        }else{
            cout << cont << " carry operations." << endl;
        }
        cin >> n >> m; 
    }
    return 0;
}