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
    adj[u].pb(v);
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
    while(cin >> n >> m && n+m!=0){
        Graph g(n);
        int j;
        while(m--){
            int u,v,p;
            cin >> u >> v >> p;
            g.addEdge(u-1,v-1);
            if(p == 2){
                g.addEdge(v-1,u-1);
            }
        }
        bool flag = true;
        visitados.clear();
        for(j = 0; j < n; j++){
            visitados.assign(g.getV(),false);
            g.dfs(j);
            flag = true;
            for(int i = 0; i < g.getV();i++){
                if(!visitados[i]){
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        
        if(flag){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }

    return 0;
}