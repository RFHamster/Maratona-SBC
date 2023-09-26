#include <bits/stdc++.h>
using namespace std;
int main (){
    int c;
    cin >> c;

    for(int i = 0; i < c; i++){
        string s;
        int num;
        cin >> s;
        cin >> num;

        if(s == "Thor"){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }
    return 0;  
}