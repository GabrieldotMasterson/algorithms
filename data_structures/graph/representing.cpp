#include <iostream>
#include <cstring> // para a função memset
#include <vector>  // para a classe vector

using namespace std;

void matrizAdjacencia(int n, int m)
{
    int M[n + 1][n + 1];
    memset(M, 0, sizeof M);
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        M[u][v] = 1;
        M[v][u] = 1; // Se G é não direcionado
        // o vértice precisa estar conectado a si mesmo?
        // --> Não, a menos que o grafo seja um grafo com laço, que é um caso especial.
    }

    // Exibe a matriz de adjacência
    cout << "Matriz de Adjacência:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}

void listaAdjacencia(int n, int m)
{

    vector<int> L[n + 1]; // A lista de adjacência
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        L[u].push_back(v);
        L[v].push_back(u); // Se G é não direcionado
    }

    // Exibe a lista de adjacência
    cout << "Lista de Adjacência:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < L[i].size(); j++)
        {
            cout << L[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 6, m = 5;
    int e;
    cin >> e;

    if (e == 1){
        cout << "Matriz de Adjacência:" << endl;
        cout << "Digite as arestas: ";
        matrizAdjacencia(n, m);
    }
    else{

        cout << endl << "Lista de Adjacência:" << endl;
        cout << "Digite as arestas: ";
        listaAdjacencia(n, m);

    }

    return 0;
}
