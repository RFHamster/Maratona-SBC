#include <bits/stdc++.h>

using namespace std;

vector<int> fibo;

void makeFibo(){
    int num = 0;
    int n = 1;
    while(num<25000){
        n++;
        num = (1/sqrt(5)) * (pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n));
        fibo[n-2] = num;
    }
}

int main (){
    fibo.assign(10000,0);
    makeFibo();

    for(int i = 0;i<22;i++){
        cout << fibo[i] << endl;
    }
    vector<int>::iterator pos = fibo.begin();
    pos--;
    if(pos == fibo.end()){
        cout << "certo" << endl;
    }

    return 0;  
}