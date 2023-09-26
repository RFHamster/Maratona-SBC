#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i<n;i++){
        float x,y;
        cin >> x;
        cin >> y;
        float rafa = pow((3*x),2) + pow(y,2);
        float beto = 2 * pow(x,2) + pow((5*y),2);
        float carlos = x * (-100) + pow(y,3);
        if(rafa>beto){
            if(rafa>carlos){
                cout << "Rafael ganhou" << endl;
            }else{
                cout << "Carlos ganhou" << endl;
            }
        }else{
            if(beto>carlos){
                cout << "Beto ganhou" << endl;
            }else{
                cout << "Carlos ganhou" << endl;
            }
        }
    }

    return 0;
}