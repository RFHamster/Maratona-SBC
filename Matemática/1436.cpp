#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0;i<n;i++){
        vector<int> equipe;
        equipe.clear();
        int j;
        double media = 0;
        cin >> j;
        for(int k = 0; k < j; k++){
            int m;
            cin >> m;
            media += m;
            equipe.emplace_back(m);
        }
        media = media/j;
        int x = equipe.size();
        x = x/2;
        cout << "Case " << i+1 << ": " << equipe[x] << endl; 
    }

    return 0;
}