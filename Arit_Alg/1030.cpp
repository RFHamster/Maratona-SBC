#include <bits/stdc++.h>
using namespace std;
  
// Recursive auxiliary function to find
// vthe position of thevlast alive person
int RecursiveJosephus(vector<int>& arr, int K,
                      vector<int>::iterator it)
{
    // If size of arr is 1
    if (arr.size() == 1) {
        return arr[0];
    }
  
    // Iterate over the range [1, K-1]
    for (int i = 1; i < K; i++) {
  
        // Increment it by 1
        it++;
  
        // If it is equal to arr.end()
        if (it == arr.end()) {
  
            // Assign arr.begin() to it
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
  
    // Return the last alive person
    return RecursiveJosephus(arr, K, it);
}
  
// Function to find the position of the
// last alive person
int Josephus(int N, int K)
{
    // Stores positions of every person
    vector<int> arr;
    for (int i = 1; i <= N; i++)
        arr.push_back(i);
  
    // Function call to find the position
    // of the last alive person
    return RecursiveJosephus(arr, K, arr.begin());
}
  
// Driver Code
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        // Given Input
        int N, K;

        cin >> N;
        cin >> K;
    
        // Function Call
        cout << "Case " << i+1 << ": " << Josephus(N, K) << endl;
    }
    
}