#include <bits/stdc++.h>
using namespace std;
int static t[102][1002];

int knapsack(int wt[], int val[], int w, int n)
{
    // Base Condition,..
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (t[n][w] != -1)
    {
        return t[n][w];
    }

    // Choice diagream..  write the code..
    if (wt[n - 1] <= w)
    {
        return t[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
    }
    else if (wt[n - 1] > w)
    {

        return t[n][w] = knapsack(wt, val, w, n - 1);
    }
}

int main(int argc, char const *argv[])
{
    int n, w;
    cout << "Enter the number of items:";

    cin >> n;
    int wt[n], val[n];

    cout << "Enter the weight of the item" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << "Enter the values of the items: ";

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    cout << "Enter the capacity of knapsack:";
    cin >> w;
    int maxProfit = knapsack(wt, val, w, n);
    cout << "Maximum Profit" << maxProfit << endl;

    return 0;
}
