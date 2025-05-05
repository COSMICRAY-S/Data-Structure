#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 100;
vector<int> graph[N];
bool visited[N];

void bfs(int start) {
    visited[start] = true;
    queue<int> q;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (auto &adj : graph[node]) {
            if (!visited[adj]) {
                visited[adj] = true;
                q.push(adj);
            }
        }
    }
    cout << endl;
}

int main() {
    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u); // undirected graph
    }

    int start;
    cout << "Enter start node: ";
    cin >> start;

    bfs(start);

    return 0;
}

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <queue>
// using namespace std;

// unordered_map<string, vector<string>> graph;
// unordered_map<string, bool> visited;

// void bfs(string start) {
//     queue<string> q;
//     q.push(start);
//     visited[start] = true;

//     cout << "BFS Traversal: ";
//     while (!q.empty()) {
//         string node = q.front();
//         q.pop();
//         cout << node << " ";

//         for (auto &nbr : graph[node]) {
//             if (!visited[nbr]) {
//                 visited[nbr] = true;
//                 q.push(nbr);
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int edges;
//     cout << "Enter number of edges: ";
//     cin >> edges;
//     cout << "Enter edges (e.g., A B or 1 2):\n";
//     for (int i = 0; i < edges; i++) {
//         string u, v;
//         cin >> u >> v;
//         graph[u].push_back(v);
//         graph[v].push_back(u);
//     }

//     string start;
//     cout << "Enter starting node: ";
//     cin >> start;

//     bfs(start);
//     return 0;
// }
