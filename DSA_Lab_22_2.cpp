#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector <int> graph[N];
bool visited[N];

void dfs(int source){
    cout << source <<" ";
    visited[source] = 1;

    for (int i = 0; i < graph[source].size(); i++){
        int next = graph[source][i];
        if (visited[next] == 0)
            dfs(next);
    }
}

int main(){
    int nodes, edges;
    cout<<"node, edge: ";
    cin >> nodes >> edges;

    cout<<"egde(A B/1 2):\n";
    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout<<"start node: ";
    cin>>start;
    cout<<"DFS: ";
    dfs(start);

    // for (int i = 0; i < nodes; i++){
    //     if (visited[i] == 1){
    //         cout << "Node " << i << " is visited." << endl;

    //     }
    //     else{
    //         cout << "Node " << i << " is not visited" << endl;
    //     }
    // }

    return 0;
}