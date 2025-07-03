#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> t(1001, vector<int>(1001, -1));
int pallindromePationing(vector<int> &arr, int i, int j)

{
    // base cases..
    if (i >= j)
    {
        return 0;
    }
    if (t[i][j] != -1)
    {
        return t[i][j];
    }
    // Temproary answer..
    int mn = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int tempAns = pallindromePationing(arr, i, k) + pallindromePationing(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        mn = min(mn, tempAns);
    }
    return t[i][j] = mn;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of matrices :";
    cin >> n;
    vector<int> arr(n + 1);
    cout << "Enter the dimensions:";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    memset(&t[0][0], -1, sizeof(t));
    cout << "Minimum cost of matrix multiplication" << pallindromePationing(arr, 1, n) << endl;

    return 0;
}
