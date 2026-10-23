#include <iostream.h>

int main() {
   int adj[20][20], n, e, i, j, u, v;
   cout << "Enter number of vertices: ";
   cin >> n;

    // start with all zeros (no edges)
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
           adj[i][j] = 0;

    cout << "Enter number of edges: ";
    cin >> e;
    cout << "Enter the edges (u v) with vertices from 1 to " << n << ":\n";
    for (i = 0; i < e; i++) {
       cin >> u >> v;
       adj[u - 1][v - 1] = 1;
       adj[v - 1][u - 1] = 1; // undirected graph (both directions)
    }

    cout << "\nAdjacency Matrix:\n";
    for (i = 0; i < n; i++) {
       for (j = 0; j < n; j++)
          cout << adj[i][j] << " ";
       cout << "\n";
    }
    return 0;
}
