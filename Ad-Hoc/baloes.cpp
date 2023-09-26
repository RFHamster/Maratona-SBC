#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    vector<int> vet;

    cin >> n;
    int num;
    int maior = 0;
    for(int i=0;i<n;i++){
        cin >> num;
        vet.emplace_back(num);
    }    

    int count = 0;
    while(!vet.empty()){
        maior = *max_element(vet.begin(),vet.end());
        count++;
        for(int i = 0; i<vet.size();i++){
            if(vet[i] == maior){
                vet.erase(vet.begin()+i);
                maior -= 1;
                i-=1;
            }
        }
    }

    cout << count << endl;

    return 0;
}