#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n;
    cin >> k;
    vector<string> nomes;

    for(int i = 0;i<n;i++){
        string s;
        cin >> s;
        nomes.push_back(s);
    }

    sort(nomes.begin(),nomes.end());

    cout << nomes[k-1] << endl;

    return 0;
}