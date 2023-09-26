#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    int flag;
    while(cin >> n >> m){
        flag = 0;
        vector<double> resultados;
        int pesos[n];
        resultados.clear();
        for(int i = 0; i<n;i++){
            cin >> pesos[i];
        }

        if(n==2){
            for(int i = 0;i<m;i++){
                for(int j=0;j<m;j++){
                    double result = i*pesos[0] + j*pesos[1];
                    if(find(resultados.begin(), resultados.end(), result) != resultados.end()){
                        flag = 1;
                        break;
                    }
                    resultados.emplace_back(result);
                }
                if(flag) break;
            }
        }else{
            for(int i = 0;i<m;i++){
                for(int k = 0; k<m;k++){
                    for(int j=0;j<m;j++){
                        double result = i*pesos[0] + k*pesos[1] + j*pesos[2];
                        if(find(resultados.begin(), resultados.end(), result) != resultados.end()){
                            flag = 1;
                            break;
                        }
                        resultados.emplace_back(result);
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
        }
        if(flag){
            cout<<"Try again later, Denis..."<<endl;
        }else{
            cout<<"Lucky Denis!"<<endl;
        }
    }
    return 0;
}