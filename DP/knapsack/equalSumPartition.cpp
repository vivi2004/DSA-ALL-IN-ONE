#include <bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int sum, int n)
{

    bool t[n + 1][sum + 1];
    // base case..
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = false;
            else if (j == 0)
                t[i][j] = true;
        }
    }
    // top down approach...
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}

bool equalSubsetSum(int arr[], int n)
{
    int sum = accumulate(arr, arr + n, 0);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum % 2 != 0)
        return false;
    else if (sum % 2 == 0)
    {
        return subsetSum(arr, sum / 2, n);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of element";
    cin >> n;
    int arr[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (equalSubsetSum(arr, n))
        cout << "Yes, the array can be partitioned into two equal subsets.";
    else
        cout << " NO , the array cannot be partitioned into two equal subsets";

    return 0;
}
