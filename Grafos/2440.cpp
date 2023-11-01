#include <bits/stdc++.h>

using namespace std;

#define pb push_back

class Graph {
    int V;
    vector<int>* adj;
 
public:
    Graph(int V);

    void addEdge(int u, int v);
 
    void dfs(int s);

    int getV() {
        return V;
    }
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int u, int v)
{
    vector<int>::iterator it;
    it = find(adj[u].begin(),adj[u].end(),v);
    if(it==adj[u].end()){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

int cont = 0;
vector<bool> visitados;

void Graph::dfs(int s){
    stack<int> pilha;
    vector<int>::iterator it;
    pilha.push(s);
    visitados[s] = true;
    while(!pilha.empty()){
        int atual = pilha.top();
        pilha.pop();
        for(it = adj[atual].begin(); it != adj[atual].end();it++){
            if(!visitados[*it]){
                pilha.push(*it);
                visitados[*it] = true;
            }
        }
    }
}

int main(){
    int n,m;
    cin >> n >> m;

    Graph g(n);

    while(m--){
        int u,v;
        cin >> u >> v;
        g.addEdge(u-1,v-1);
    }
    int cont = 0;
    visitados.clear();
    visitados.assign(g.getV(),false);
    g.dfs(0);
    cont++;
    for(int i = 1; i < g.getV();i++){
        if(!visitados[i]){
            g.dfs(i);
            cont++;
        }
    }
    
    cout << cont << endl;

    return 0;
}