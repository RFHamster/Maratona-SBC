#include <bits/stdc++.h>
#include <string>

using namespace std;

int main (){
    string n;
    cin >> n;
    int total = 0;

    for(int i = 0; i<n.size();i++){
        int soma = n[i] - '0';
        total += soma;
    }

    if(total % 3 == 0){
        cout << 0 << endl;
    }else if((total-1) % 3 == 0){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }

    return 0;
}
