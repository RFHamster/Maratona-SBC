#include <iostream>
 
using namespace std;
 
int main() {
     int certo;
     cin >> certo;
     int cont = 0;
     int participante[5];
     for(int i = 0; i <5;i++){
         cin >> participante[i];
         if(participante[i] == certo){
             cont++;
         }
     }
     cout << cont << endl;
     
 
    return 0;
}