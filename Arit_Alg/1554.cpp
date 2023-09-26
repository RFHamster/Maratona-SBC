#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;

    while(n--){
        int qnt;
        cin >> qnt;
        long long int x;
        long long int y;
        cin >> x;
        cin >> y;
        double distancia = 999999999999999999;
        int bola = 0;
        vector<double> a;
        for(int i = 1; i<=qnt;i++){
            long long int first;
            long long int second;
            cin >> first;
            cin >> second;
            first = abs(x-first)*abs(x-first);
            second = abs(y-second)*abs(y-second);
            double dAt = sqrt(first+second);
            a.push_back(dAt);
        }
        for(int i=0;i<a.size();i++){
            if(a[i]<distancia){
                distancia=a[i];
                bola=i;
            }
        }
        cout << bola+1 << endl;  
    }
    return 0;
}