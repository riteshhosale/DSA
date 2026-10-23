#include <iostream.h>
#include <conio.h>

#define MAX 20
#define INF 1000000000

int main()
{
    int graph[MAX][MAX], n, source;
    int dist[MAX], visited[MAX], parent[MAX];
    int i, j, count, u, v;
    int path[MAX], length, current;

    clrscr();
    cout << "Enter number of vertices (1-20): ";
    cin >> n;

    if (n < 1 || n > MAX)
    {
        cout << "Invalid number of vertices\n";
        getch();
        return 0;
    }

    cout << "Enter weighted adjacency matrix (0 means no edge, ";
    cout << "except diagonal):\n";

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] < 0)
            {
                cout << "Negative weights are not supported\n";
                getch();
                return 0;
            }
        }
    }

    cout << "Enter source vertex (1-" << n << "): ";
    cin >> source;

    if (source < 1 || source > n)
    {
        cout << "Invalid source vertex\n";
        getch();
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
        parent[i] = -1;
    }
    dist[source - 1] = 0;

    for (count = 0; count < n; count++)
    {
        u = -1;
        for (i = 0; i < n; i++)
        {
            if (!visited[i] && (u == -1 || dist[i] < dist[u]))
                u = i;
        }

        if (u == -1 || dist[u] == INF)
            break;

        visited[u] = 1;
        for (v = 0; v < n; v++)
        {
            if (u != v && graph[u][v] > 0 &&
                !visited[v] && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    cout << "Shortest paths from vertex " << source << ":\n";
    for (v = 0; v < n; v++)
    {
        cout << "To vertex " << v + 1 << ": ";
        if (dist[v] == INF)
        {
            cout << "No path\n";
            continue;
        }

        cout << "Distance = " << dist[v] << ", Path = ";
        length = 0;
        current = v;

        while (current != -1)
        {
            path[length++] = current;
            current = parent[current];
        }

        for (i = length - 1; i >= 0; i--)
        {
            cout << path[i] + 1;
            if (i > 0)
                cout << " -> ";
        }
        cout << endl;
    }

    getch();
    return 0;
}
