#include <bits/stdc++.h>

using namespace std;

// **** TIME LIMIT

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> idades;
    vector<string> quartos;

    int i = n;
    string aux;
    while(i--){
        cin >> aux;
        quartos.emplace_back(aux);
    }
    i = n;
    while(i--){
        cin >> aux;
        idades.emplace_back(aux);
    }
    i = 0;
    for(string s : quartos){
        if(i == 0){
            i = 10;
        }else{
            cout << " ";
        }
        
        cout << idades[0];
        idades.erase(std::find(idades.begin(), idades.end(), s));
    }
    cout << endl;
    return 0;
}