#include <bits/stdc++.h>
using namespace std;
int subsetSum(int arr[], int sum, int n)
{
    // base case..
    int t[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                t[i][j] = 0;
            else if (j == 0)
                t[i][j] = 1;
        }
    }
    // top down approach..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int targetSum(int arr[], int n, int diff)
{
    int sum = accumulate(arr, arr + n, 0);

    if ((sum - diff) % 2 != 0 || sum < diff)
        return 0;
    int s1 = (sum - diff) / 2;
    return subsetSum(arr, s1, n);
}

int main(int argc, char const *argv[])
{
    int n, diff;
    cout << "Enter the number of elements :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the difference value";
    cin >> diff;
    int count = targetSum(arr, n, diff);
    cout << "Number of subset with given difference " << count << endl;
    return 0;
}
