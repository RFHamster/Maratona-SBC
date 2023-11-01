#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        double x = s.size() * 0.01;
        printf("%.2lf\n", x);
    }    
    return 0;
}