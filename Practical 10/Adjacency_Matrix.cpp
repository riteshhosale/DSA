#include <iostream>
using namespace std;

int main()
{
    int graph[20][20] = {0};
    int vertices, edges, u, v;

    cout << "Enter number of vertices (1-20): ";
    cin >> vertices;

    if (vertices < 1 || vertices > 20)
    {
        cout << "Invalid number of vertices\n";
        return 0;
    }

    cout << "Enter number of edges: ";
    cin >> edges;

    if (edges < 0 || edges > vertices * (vertices - 1) / 2)
    {
        cout << "Invalid number of edges\n";
        return 0;
    }

    cout << "Enter each edge as two vertex numbers (1 to "
         << vertices << "):\n";

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;

        if (u < 1 || u > vertices || v < 1 || v > vertices)
        {
            cout << "Invalid vertex number\n";
            return 0;
        }

        graph[u - 1][v - 1] = 1;
        graph[v - 1][u - 1] = 1;
    }

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }

    return 0;
}
