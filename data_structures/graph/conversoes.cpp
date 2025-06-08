/*como converter um grafo de matriz de adjacencia pra lista de adjacencia*/

// Conversão de uma matriz de adjacência para uma lista de adjacência em C++ em um grafo não ponderado.
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Matriz de adjacência (grafo não direcionado)
//     vector<vector<int>> matriz = {
//         {0, 1, 0, 1},
//         {1, 0, 1, 1},
//         {0, 1, 0, 0},
//         {1, 1, 0, 0}
//     };

//     int n = matriz.size();
//     vector<vector<int>> lista(n);

//     // Conversão da matriz para lista
//     for (int linha = 0; linha < n; linha++) {
//         for (int coluna = 0; coluna < n; coluna++) {
//             if (matriz[linha][coluna]) {
//                 lista[linha].push_back(coluna);
//             }
//         }
//     }

//     // Exibir a lista de adjacência
//     for (int linha = 0; linha < n; linha++) {
//         cout << linha << ": ";
//         for (int vizinho : lista[linha]) {
//             cout << vizinho << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// já para grafos ponderados teremos um pouco mais de trabalho, armazenando os pesos em uma estrutura de dados auxiliar, como um par (caso precise refrescar a memoria esse repositorio possui dados sobre a estrutura pair em containers/pair.cpp) de inteiros (vértice, peso).

// Conversão de uma matriz de adjacência para uma lista de adjacência em C++ em um grafo ponderado.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matriz = {
        {0, 1, 0, 1},
        {3, 0, 1, 1},
        {0, 2, 0, 0},
        {1, 1, 0, 0}
    };

    int n = matriz.size();
    // vector de vector de pares para armazenar a lista de adjacência com pesos
    vector<vector<pair<int, int>>> lista(n); // (vértice, peso)

    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (matriz[linha][coluna] != 0) {
                lista[linha].push_back({coluna, matriz[linha][coluna]});
            }
        }
    }

    // Exibir lista de adjacência com pesos
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (auto [vizinho, peso] : lista[i]) {
            cout << "(" << vizinho << ", " << peso << ") ";
        }
        cout << endl;
    }

    return 0;
}

