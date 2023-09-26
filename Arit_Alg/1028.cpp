#include <bits/stdc++.h>
 
using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

 int main() {
    double n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int num1, num2;
        cin >> num1;
        cin >> num2;

        if(num2 > num1){
            int aux = num2;
            num2 = num1;
            num1 = aux;
        }

        int pilha = mdc(num1,num2);
        cout << pilha << endl;
    }
    return 0;
}