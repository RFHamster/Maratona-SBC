#include <bits/stdc++.h>
using namespace std;
int main (){
    int c = 2;
    while(cin >> c){
        vector<int> lesmas;
        lesmas.clear();
        while(c > 0){
            int lesma;
            cin >> lesma;
            lesmas.emplace_back(lesma);
            c--;
        }
        sort(lesmas.rbegin(),lesmas.rend());
        if(lesmas[0] < 10){
            cout << "1" << endl;
        }else if(lesmas[0] < 20){
            cout << "2" << endl;
        }else{
            cout << "3" << endl;
        }
    }
    return 0;  
}