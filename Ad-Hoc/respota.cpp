#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    map<int,int> pessoaTempo;
    map<int,bool> pessoaBool;

    for(int i = 0; i<n;i++){
        char tipo;
        int num;
        int tempo = 1;
        cin >> tipo;
        cin >> num;
        switch (tipo)
        {
        case 'R': //enviou
            pessoaBool[num] = false;
        break;
        case 'E': //enviou
            pessoaBool[num] = true;
        break;
        case 'T': //tempo
            tempo = num-1;
        break;
        default:
            break;
        }
        map<int,bool>::iterator it;
        for(it = pessoaBool.begin(); it!=pessoaBool.end(); ++it){
            if(!it->second){
                pessoaTempo[it->first] += tempo;
            }
        }
    }

    map<int,bool>::iterator it;
    for(it = pessoaBool.begin(); it!=pessoaBool.end(); ++it){
        if(!it->second){
            cout << pessoaTempo[it->first] << " -1" << endl;
        }else{
            cout << pessoaTempo[it->first] << " " << pessoaTempo[it->second] << endl;
        }
    }
    return 0;
}