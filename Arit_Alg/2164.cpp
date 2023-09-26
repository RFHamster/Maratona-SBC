#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

 int main() {
    double n;
    cin >> n;
    double valor = (1/sqrt(5)) * (pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n));
    // Configura a precisão decimal para a saída
    std::cout << std::fixed << std::setprecision(1);
    
    // Exibe o número arredondado usando cout
    cout << valor << endl;
    return 0;
}