// Minimum number ofinsertion in a string  to make it a palindrome...

#include <bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, int n, int m)
{
    // Intiliazation..
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // Top dow appraoch..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}
