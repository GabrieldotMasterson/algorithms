// dfs --> depth-first search
// pesquisa em profundidade
// esse algoritmo é uma técnica de busca em grafos que explora o máximo possível ao longo de cada ramo antes de retroceder.
// é amplamente utilizado em várias aplicações, como busca de caminhos, detecção de ciclos e ordenação topológica.
// *obs: a ordenação topológica é uma maneira de linearizar os vértices de um grafo direcionado acíclico (sem ciclos) (resumindo:DAG) de tal forma que, para cada aresta direcionada u -> v, o vértice u aparece antes do vértice v na ordenação.

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
    private:
        int V; // Número de vértices
    public:
        vector<vector<int>> adj; // Lista de adjacência
        Graph(int V) : V(V), adj(V) {} // construtor

        void addEdge(int v, int w) {
            adj[v].push_back(w);
            adj[w].push_back(v); // Se o grafo for não direcionado. se for retire esta linha
        }

        void DFS(int start) {
            vector<bool> visited(V, false); // Vetor para rastrear os vértices visitados
            cout << "DFS a partir do vértice " << start << ": ";
            stack<int> s;
            s.push(start);
            while (!s.empty()) {

                int v = s.top();
                s.pop();

                if (!visited[v]) {
                    cout << v << " ";
                    visited[v] = true;
                }

                for (int neighbor : adj[v]) {
                    if (!visited[neighbor]) {
                        s.push(neighbor);
                    }
                }
            }
            cout << endl;
        }
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Graph g(5); // Cria um grafo com 5 vértices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);

    // imprimir o grafo para exemplo
    for (int i = 0; i < 5; i++) {
        cout << i << ": ";
        for (int neighbor : g.adj[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    cout << endl;
    g.DFS(0); // Inicia a busca em profundidade a partir do vértice 0

    return 0;
}