#include <bits/stdc++.h>

using namespace std;

#define pb push_back

class Graph {
    int V;
    map<string, vector<string>> adj;

public:
    Graph(int V);

    void addEdge(string u, string v);

    void dfs(string s);
    bool dfsUtil(string s);

    int getV() {
        return V;
    }
};

Graph::Graph(int V) {
    this->V = V;
}

void Graph::addEdge(string u, string v) {
    adj[u].push_back(v);
}

map<string,bool> visitados;

void Graph::dfs(string s){
    visitados[s] = true;
    for(string str : adj[s]){
        if(!visitados[str]){
            dfs(str);
        }
    }
}

map<string,bool> visitados2;
bool Graph::dfsUtil(string s){
    if(visitados[s]){
        return true;
    }
    for(string str : adj[s]){
        if(!visitados2[str]){
            visitados2[str] = true;
            if(dfsUtil(str)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, c, t;
    cin >> n >> c >> t;

    Graph g(n);
    while(c--){
        string pai, mae, filho;
        cin >> pai >> mae >> filho;
        g.addEdge(filho,pai);
        g.addEdge(filho, mae);
    }

    while(t--){
        string n1, n2;
        cin >> n1 >> n2;
        visitados.clear();
        g.dfs(n1);
        visitados2.clear();
        bool flag = g.dfsUtil(n2);
        if(flag){
            cout << "verdadeiro" << endl;
            continue;
        }
        cout << "falso" << endl;
    }
    return 0;
}