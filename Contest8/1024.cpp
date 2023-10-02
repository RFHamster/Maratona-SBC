#include <bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(n--){
        string s;
        
        std::getline(std::cin, s);
        for(int i = 0;i<s.size();i++){
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
                s[i] += 3;
            }
        }
        int num = s.size()/2;
        reverse(s.begin(),s.end());
        for(int i = num; i<=s.size();i++){
            s[i] -= 1;
        }
        cout << s << endl;
    }
    return 0;
}