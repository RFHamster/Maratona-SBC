#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> pessoaGrafo;
map<string,vector<int>> camisaGrafo;
int boolRelPessoa;
map<string,int> boolRelCamisa;
vector<string> matchingPessoa;
map<string,vector<int>> matchingCamisa;
int maxRel;
int pessoas;
bool flag = false;
int contadorMatching;

bool matchPessoa(int pessoa, long int visitados){
    visitados = visitados | 1 << pessoa;
    if(boolRelPessoa & (1 << pessoa)){
        string prevMatch = matchingPessoa[pessoa];
        for(string s : pessoaGrafo[pessoa]){
            if(s == prevMatch){
                continue;
            }
            if(boolRelCamisa[s] < maxRel){
                matchingCamisa[s].emplace_back(pessoa);
                boolRelCamisa[s] += 1;
                matchingPessoa[pessoa] = s;
                return true;
            }
            vector<int>::iterator i;
            for(i = matchingCamisa[s].begin();i != matchingCamisa[s].end();++i){
                if(!(visitados & (1<<*i))){
                    if(matchPessoa(*i, visitados)){
                        *i = pessoa;
                        matchingPessoa[pessoa] = s;
                        return true;
                    }
                }
            }
        }
        return false;
    }

    for(string s : pessoaGrafo[pessoa]){
        if(boolRelCamisa[s] < maxRel){
            matchingCamisa[s].emplace_back(pessoa);
            boolRelCamisa[s] += 1;
            matchingPessoa[pessoa] = s;
            boolRelPessoa = boolRelPessoa | 1 << pessoa;
            contadorMatching++;
            if(contadorMatching == pessoas){
                flag = true;
            }
            return true;
        }
        vector<int>::iterator i;
        for(i = matchingCamisa[s].begin();i != matchingCamisa[s].end();++i){
            if(!(visitados & (1<<*i))){
                if(matchPessoa(*i, visitados)){
                    *i = pessoa;
                    matchingPessoa[pessoa] = s;
                    contadorMatching++;
                    boolRelPessoa = boolRelPessoa | 1 << pessoa;
                    if(contadorMatching == pessoas){
                        flag = true;
                    }
                    return true;
                }
            }
        }
    }
    return false;

}

void resetCamisa(){
    camisaGrafo["XS"].clear();
    camisaGrafo["S"].clear();
    camisaGrafo["M"].clear();
    camisaGrafo["L"].clear();
    camisaGrafo["XL"].clear();
    camisaGrafo["XXL"].clear();

    matchingCamisa["XS"].clear();
    matchingCamisa["S"].clear();
    matchingCamisa["M"].clear();
    matchingCamisa["L"].clear();
    matchingCamisa["XL"].clear();
    matchingCamisa["XXL"].clear();

    boolRelCamisa["XS"] = 0;
    boolRelCamisa["S"] = 0;
    boolRelCamisa["M"] = 0;
    boolRelCamisa["L"] = 0;
    boolRelCamisa["XL"] = 0;
    boolRelCamisa["XXL"] = 0;
}

int main(){
    int n;
    cin >> n;
    
    int camisas;

    while(n--){
        cin >> camisas >> pessoas;
        contadorMatching=0;
        maxRel = camisas/6;

        pessoaGrafo.clear();
        pessoaGrafo.resize(pessoas);
        camisaGrafo.clear();

        boolRelPessoa = 0;

        resetCamisa();

        matchingPessoa.clear();
        matchingPessoa.resize(pessoas);

        resetCamisa();

        for(int i = 0; i<pessoas;i++){
            string s;
            int j = 2;
            while(j--){
                cin >> s;
                pessoaGrafo[i].emplace_back(s);
                camisaGrafo[s].emplace_back(i);
            }
        }
        flag = false;
        for(int i = 0; i < pessoas;i++){
            if(!(boolRelPessoa & (1 << i))){
                if(!matchPessoa(i,0)){
                    cout << "NO" << endl;
                    break;
                }
            }
            if(flag){
                cout << "YES" << endl;
                break;
            }
        } 
    }
    return 0;
}