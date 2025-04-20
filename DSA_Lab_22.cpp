#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex) {
    vis[vertex] = true;
    cout << vertex << " ";

    for (int child : graph[vertex]) {
        if (!vis[child]) {
            dfs(child);
        }
    }
}

int main() {
    int edgenumber;
    cout << "Enter the number of edges: ";
    cin >> edgenumber;

    cout << "Enter source and destination vertex:\n";
    for (int i = 0; i < edgenumber; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // undirected
    }

    int startVertex;
    cout << "Enter the starting vertex for DFS: ";
    cin >> startVertex;

    fill(vis, vis + N, false); // reset visited
    cout << "DFS traversal starting from node " << startVertex << ": ";
    dfs(startVertex);
    cout << endl;

    return 0;
}
