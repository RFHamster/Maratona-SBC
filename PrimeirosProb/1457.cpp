#include <bits/stdc++.h>

int main(){
    int n;

    std::cin >> n;

    for(int i = 0; i<n;i++){
        std::string s;
        std::cin >> s;
        char c = '!';
        int num = 1;
        while(s[num] != c){
            num++;
        }
        std::string numero = s.substr(0,num);
        std::string ponto = s.substr(num);
        num = std::stoi(numero);
        int qnt = ponto.size();
        unsigned long long valor = num;
        unsigned long long inc = 1;
        long long diff = num - (inc*qnt);
        while(diff >= 1){
            valor = valor * diff;
            inc++;
            diff = num-(inc*qnt);
        }

        std::cout << valor << std::endl;


    }

    return 0;
}