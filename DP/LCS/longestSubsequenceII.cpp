// so we have to  return the length of longestSubsequence  in a string..
//  recursive .. subsequences..

#include <bits/stdc++.h>
using namespace std;

int LCS(string x, string y, int n, int m)
{
    // Using top down approach..
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Base casese..
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    // Top down approach..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int main(int argc, char const *argv[])
{
    string x, y;
    cout << "Enter first string:";
    cin >> x;
    cout << "Enter second string:";
    cin >> y;
    int n = x.size();
    int m = y.size();
    int result = LCS(x, y, n, m);
    cout << "Length  of Longest Common Subsequence: " << result << endl;

    return 0;
}

// Recursive  you have to convert it into
// 1 Memoize the code
// 2 Top down appraoch..
