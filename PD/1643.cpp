#include <bits/stdc++.h>

using namespace std;

vector<int> fibo;

int main (){
    vector<int> fibo = {1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711};

    int n;
    cin >> n;
    while(n--){
        int result = 0;
        int km;
        cin >> km;
        int limite = 20;
        while(km > 0){
            for(int i = limite;i>=0;i--){
                if(km >= fibo[i]){
                    km -= fibo[i];
                    limite = i;
                    if(i != 0){
                        result += fibo[i-1];
                    }
                    break;
                }
            }
        }
        cout << result << endl;
    }


    return 0;  
}