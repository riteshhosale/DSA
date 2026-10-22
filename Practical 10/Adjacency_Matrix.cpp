#include <iostream.h>
#include <conio.h>

#define MAX 20

int main()
{
    int graph[MAX][MAX];
    int vertices, edges, u, v, i, j;

    clrscr();
    cout << "Enter number of vertices (1-20): ";
    cin >> vertices;

    if (vertices < 1 || vertices > MAX)
    {
        cout << "Invalid number of vertices\n";
        getch();
        return 0;
    }

    for (i = 0; i < vertices; i++)
        for (j = 0; j < vertices; j++)
            graph[i][j] = 0;

    cout << "Enter number of edges: ";
    cin >> edges;

    if (edges < 0 || edges > vertices * (vertices - 1) / 2)
    {
        cout << "Invalid number of edges\n";
        getch();
        return 0;
    }

    cout << "Enter each edge as two vertex numbers (1 to "
         << vertices << "):\n";

    for (i = 0; i < edges; i++)
    {
        cin >> u >> v;
        if (u < 1 || u > vertices || v < 1 || v > vertices)
        {
            cout << "Invalid vertex number\n";
            getch();
            return 0;
        }

        graph[u - 1][v - 1] = 1;
        graph[v - 1][u - 1] = 1;
    }

    cout << "Adjacency Matrix:\n";
    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
            cout << graph[i][j] << " ";
        cout << endl;
    }

    getch();
    return 0;
}
