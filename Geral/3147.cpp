#include <bits/stdc++.h>

using namespace std;

int main (){
    map<string,int> p;
    p["bonecos"] =  0;
    p["arquitetos"] =  0;
    p["musicos"] =  0;
    p["desenhistas"] =  0;
    int n;
    cin >> n;
    while(n--){
        string s, t;
        int x;
        cin >> s >> t >> x;

        p[t] += x;
    }
    int total = 0;
    total += p["bonecos"]/8;
    total += p["arquitetos"]/4;
    total += p["musicos"]/6;
    total += p["desenhistas"]/12;

    cout << total << endl;

    return 0;
}