#include <bits/stdc++.h>
using namespace std;
int knapSack(int wt[], int val[], int w, int n)
{
    // Base case....
    int t[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    // Using top down aproach.. to find  the knapSack ...
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][w];
}
int main()
{
    int n, w;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> w;

    int wt[n], val[n];

    cout << "Enter weights of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }

    cout << "Enter values of items: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }

    int maxValue = knapSack(wt, val, w, n);
    cout << "Maximum value in Knapsack = " << maxValue << endl;

    return 0;
}
