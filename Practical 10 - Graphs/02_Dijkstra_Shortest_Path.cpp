#include <iostream.h>

#define INF 9999

int main() {
   int cost[20][20], dist[20], visited[20];
   int n, i, j, u, v, min, start;

    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter the cost adjacency matrix (9999 for no path):\n";
    for (i = 0; i < n; i++)
       for (j = 0; j < n; j++)
          cin >> cost[i][j];

    cout << "Enter the source vertex (1 to " << n << "): ";
    cin >> start;
    start = start - 1;

    // initialise distances from the source
    for (i = 0; i < n; i++) {
        dist[i] = cost[start][i];
        visited[i] = 0;
    }
    dist[start] = 0;
    visited[start] = 1;

    for (i = 1; i < n; i++) {
       min = INF;
       u = -1;
       // choose the nearest unvisited vertex
       for (j = 0; j < n; j++)
          if (!visited[j] && dist[j] < min) {
             min = dist[j];
             u = j;
          }
       if (u == -1) break;
       visited[u] = 1;
       // update the distances of the neighbours
       for (v = 0; v < n; v++)
          if (!visited[v] && dist[u] + cost[u][v] < dist[v])
             dist[v] = dist[u] + cost[u][v];
    }

    cout << "\nShortest distance from source vertex " << start + 1 << ":\n";
    for (i = 0; i < n; i++)
       cout << "To vertex " << i + 1 << " = " << dist[i] << "\n";
    return 0;
}
