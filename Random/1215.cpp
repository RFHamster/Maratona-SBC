#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> palavras;
    set<string>::iterator it;
    string s;
    while(cin >> s){
        string word = "";
        for(char c : s){
            c = tolower(c);
            if(c<97 || c > 122){
                if(word != ""){
                    palavras.insert(word);
                    word = "";
                }
                continue;
            }
            word += c;
        }
        if(word != ""){
            palavras.insert(word);
        }
    }
    
    it = palavras.begin();
    while(it!=palavras.end()){
        cout << *it << endl;
        it++;
    }

    return 0;
}