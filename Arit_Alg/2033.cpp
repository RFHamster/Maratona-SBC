#include <bits/stdc++.h>

using namespace std;

int main(){
    double c;
    double i;
    double t;

    while(cin >> c){
        cin >> i;
        cin >> t;
        double jurosSi = c + c*i*t;
        double jurosComp = c * pow((1+i),t);

        cout << "DIFERENCA DE VALOR = " << fixed << setprecision(2) << jurosComp - jurosSi << endl;
        cout << "JUROS SIMPLES = " << fixed << setprecision(2) << jurosSi - c << endl;
        cout << "JUROS COMPOSTO = " << fixed << setprecision(2) << jurosComp - c << endl;

    }

    return 0;
}