#include<iostream>
#include<vector>
using namespace std;

const int N =1000;
vector< int > graph[N];
bool visited[N];

void dfs(int node){
    visited[node]=true;
    cout<<node<<" ";

    for(auto &adj : graph[node]){
        if(visited[adj]==false){
            dfs(adj);
        }
    }

}
int main(){
    int edges;
    cout<<"Enter number of edges: ";
    cin>>edges;

    cout<<"Enter edges: \n";
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int start;
    cout<<"Enter start node: ";
    cin>>start;

    cout<<"DFS Traversal: ";
    dfs(start);

    return 0;
}


/*
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<string, vector<string>> graph;
unordered_map<string, bool> visited;

void dfs(string node) {
    visited[node] = true;
    cout << node << " ";

    for (auto &nbr : graph[node]) {
        if (!visited[nbr]) {
            dfs(nbr);
        }
    }
}

int main() {
    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;
    cout << "Enter edges (e.g., A B or 1 2):\n";
    for (int i = 0; i < edges; i++) {
        string u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    string start;
    cout << "Enter starting node: ";
    cin >> start;

    cout << "DFS Traversal: ";
    dfs(start);
    cout << endl;

    return 0;
}

*/


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e3 + 10;
// vector<int> graph[N];
// bool vis[N];

// void dfs(int vertex) {
//     cout << vertex << " ";
//     vis[vertex] = true;

//     for (int child : graph[vertex]) {
//         if (vis[child] == false) {
//             dfs(child);
//         }
//     }
// }

// int main() {
//     int edgenumber;
//     cout << "Enter the number of edges: ";
//     cin >> edgenumber;

//     cout << "Enter source and destination vertex:\n";
//     for (int i = 0; i < edgenumber; ++i) {
//         int u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//         graph[v].push_back(u); // undirected
//     }

//     int startVertex;
//     cout << "Enter node: ";
//     cin >> startVertex;

//     fill(vis, vis + N, false); // reset visited
//     cout << "DFS traversal: ";
//     dfs(startVertex);
//     cout << endl;

//     return 0;
// }

