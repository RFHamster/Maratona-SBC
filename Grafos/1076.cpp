#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V;
    vector<int>* adj;
 
public:
    Graph(int V);

    void addEdge(int u, int v);
 
    int dfs(int s);
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

int Graph::dfs(int s){
    stack<int> pilha;
    vector<bool> visitados(V,false);
    int cont = 0;
    vector<int>::iterator it;
    pilha.push(s);
    visitados[s] = true;
    while(!pilha.empty()){
        int atual = pilha.top();
        pilha.pop();
        for(it = adj[atual].begin(); it != adj[atual].end();it++){
            if(!visitados[*it]){
                cont++;
                pilha.push(*it);
                visitados[*it] = true;
            }
        }
    }
    return cont;
}
 
int main(){    
    int n;
    cin >> n;

    while(n--){
        int inicio;
        int tamanho,aresta;
        cin >> inicio >> tamanho >> aresta;
        Graph g(tamanho);
        while(aresta--){
            int u,v;
            cin >> u >> v;
            g.addEdge(u,v);
        }
        int cont = g.dfs(inicio);
        cont = cont * 2;
        cout << cont << endl;
    }
    
    return 0;
}