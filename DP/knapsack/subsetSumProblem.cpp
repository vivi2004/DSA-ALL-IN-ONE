// The question wants  to return the  boolean fucntion wh
//  whether  the sum is    in the subset or not..

#include <bits/stdc++.h>
using namespace std;
bool subsetSum(int arr[], int n, int sum)
{
    bool t[n + 1][sum + 1];

    // base.. case..
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    }

    //  Using top-down approach..
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

int main(int argc, char const *argv[])
{
    int n, sum;
    cout << "Enter  the  number of elements :";
    cin >> n;
    int arr[n];
    cout << "Enter the element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> sum;

    if (subsetSum(arr, n, sum))
        cout << "Subset with the given sum exists.\n";
    else
        cout << "Subset with the given sum does not exist.\n";

        return 0;
}
