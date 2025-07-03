#include <bits/stdc++.h>
using namespace std;

void print_graph(vector<vector<int>> adjacencyMatrix)
{
    for (int i = 1; i <= 4; i++)
    {
        cout << "Node" << i << "Neighbour";
        for (int j = 1; j <= 4; j++)
        {
            if (adjacencyMatrix[i][j] == 1)
                cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> edgelist = {{1, 2}, {2, 3}, {3, 4}, {1, 3}, {4, 2}};
    int n = 5;
    vector<vector<int>> adjacencyMatrix(5, vector<int>(5, 0));
    for (int i = 0; i < edgelist.size(); i++)
    {
        int a = edgelist[i][0], b = edgelist[i][1];
        adjacencyMatrix[a][b] = 1, adjacencyMatrix[b][a] = 1;
    }
    print_graph(adjacencyMatrix);
}