// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

vector<int>primos;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }
    
    if (num <= 3) {
        return true; // 2 e 3 são primos
    }
    
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Números divisíveis por 2 ou 3 não são primos
    }
    
    // Verifica divisibilidade por outros números primos até a raiz quadrada de num
    for (int i = 5; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; // Número divisível por um dos fatores
        }
    }
    
    return true; // Se não foi encontrado divisor, o número é primo
}

void preenchePrimos(){
    for(int i = 2; i<32650;i++){
        if(isPrime(i)){
            primos.emplace_back(i);
        }
    }
}


// Recursive auxiliary function to find
// vthe position of thevlast alive person
int RecursiveJosephus(vector<int>& arr, unsigned long long int K,
                      vector<int>::iterator it)
{
    int size = arr.size();
    // If size of arr is 1
    if (size == 1) {
        return arr[0];
    }
    int f = primos[K];
    if(f>size){
        f = f % size;
    }
    f--;
    // Iterate over the range [1, K-1]
    while(f--) {
  
        // Increment it by 1
        it++;
  
        // If it is equal to arr.end()
        if (it == arr.end()) {
            // Assign arr.begin()
            it = arr.begin();
        }
    }
  
    // If it is equal to prev(arr.end())
    if (it == prev(arr.end())) {
  
        // Assign arr.begin() to it
        it = arr.begin();
  
        // Remove the last element
        arr.pop_back();
    }
    else {
        // Erase the element at it
        arr.erase(it);
    }
    
    K+=1;
    return RecursiveJosephus(arr, K, it);
    
}
  
// Function to find the position of the
// last alive person
int Josephus(int N)
{
    // Stores positions of every person
    vector<int> arr;
    for (int i = 1; i <= N; i++)
        arr.push_back(i);
  
    // Function call to find the position
    // of the last alive person
    return RecursiveJosephus(arr, 0, arr.begin());
}
  
// Driver Code
int main()
{
    preenchePrimos();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N = 1;
    cin >> N;
    while(N != 0){
        // Given Input
        cout << Josephus(N) << endl;
        cin >> N;        
    }
    
}