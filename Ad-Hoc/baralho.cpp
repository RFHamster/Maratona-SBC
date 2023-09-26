#include <bits/stdc++.h>

using namespace std;

int main (){

    string s;

    cin >> s;

    vector<string> cartas;

    for(int i = 0;i<s.length();i+=3){
        cartas.emplace_back(s.substr(i,3));
    }

    map<char,int> naipesQnt;
    naipesQnt['C'] = 13;
    naipesQnt['E'] = 13;
    naipesQnt['U'] = 13;
    naipesQnt['P'] = 13;

    vector<string> inseridos;
    vector<string>::iterator itr;

    for(int i = 0; i <cartas.size();i++){
        char naipe = cartas[i][2];

        itr = find(inseridos.begin(), inseridos.end(), cartas[i]);
        if(itr == inseridos.cend()){
            inseridos.emplace_back(cartas[i]);
            naipesQnt[naipe] -= 1;
        }else{
            naipesQnt[naipe] = -1;
        }
    }

    if(naipesQnt['C'] < 0){
        cout << "erro" << endl;
    }else{
        cout << naipesQnt['C'] << endl;
    }

    if(naipesQnt['E'] < 0){
        cout << "erro" << endl;
    }else{
        cout << naipesQnt['E'] << endl;
    }

    if(naipesQnt['U'] < 0){
        cout << "erro" << endl;
    }else{
        cout << naipesQnt['U'] << endl;
    }

    if(naipesQnt['P'] < 0){
        cout << "erro" << endl;
    }else{
        cout << naipesQnt['P'] << endl;
    }
    
    
    return 0;
}