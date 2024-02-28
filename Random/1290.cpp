#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;
    int n,m;
    long long int itemVol;
    long long int volume;
    string s;
    string key;
    //Key -> Vetor Caixa || Value -> volume,qnt
    map<vector<int>,pair<int,int>> chaveVolume;
    vector<int> item(3);
    vector<int> itemLer(3);
    vector<pair<int,pair<vector<int>,int>>> aux;
    while(cin >> n >> m && n+m!=0){
        chaveVolume.clear();
        itemVol = 1;
        for(int i = 0; i < 3; i++){
            cin >> valor;
            item[i] = valor;
            itemVol = itemVol * valor;
        }
        sort(item.begin(), item.end());
        
        while(m--){
            volume = 1;
            for(int i = 0; i < 3; i++){
                cin >> valor;
                itemLer[i] = valor;
                volume = volume * valor;
            }
            if(volume < itemVol){
                continue;
            }
            sort(itemLer.begin(), itemLer.end());
            chaveVolume[itemLer].first = volume;
            chaveVolume[itemLer].second += 1;
        }

        aux.clear();

        map<vector<int>, pair<int, int>>::iterator it;
        for (it = chaveVolume.begin(); it != chaveVolume.end(); ++it) {
            vector<int> chaveAux = it->first;
            int quantidade = it->second.second;
            int volume = it->second.first;

            aux.push_back({volume, {chaveAux, quantidade}});
        }

        sort(aux.begin(), aux.end());

        bool flag = true;
        for(int i = 0; i < aux.size();i++){
            bool flag2 = true;
            pair<int,pair<vector<int>,int>> caixa = aux[i];
            if(caixa.second.second < n){
                continue;
            }
            for(int ii = 0; ii < 3; ii++){
                if(caixa.second.first[ii] < item[ii]){
                    flag2 = false;
                    break;
                }
            }
            if(flag2){
                flag = false;
                cout << caixa.first - itemVol << endl;
                break;
            }
        }

        if(flag){
            cout << "impossible" << endl;
        }
        
        

    }
    return 0;
}