#include <iostream>
#include <vector>


using namespace std;

class Graph {
public:
    int n; // number of vertices
    vector<vector<int>> adj; // adjacency list
    vector<bool> visited;
    bool is_undirected;

    Graph(int n, bool is_undirected = true)
        : n(n), adj(n), visited(n, false), is_undirected(is_undirected) {}

    void add_edge(int u, int v) {
        adj[u].push_back(v);
        if (is_undirected) {
            adj[v].push_back(u);
        }
    }

    void dfs(int u) {
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs(v);
            }
        }
    }

    int count_components() {
        fill(visited.begin(), visited.end(), false); // clean visited array
        int components = 0; // component is a subgraph if we see the main graph like a tree it is like the branch of the tree

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                dfs(i);
                components++;
            }
        }

        return components;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Graph graph(n);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph.add_edge(u, v);
    }

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << " -> ";
        for (int v : graph.adj[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    cout << endl << "Number of components: " << graph.count_components() << endl;

    return 0;
}
