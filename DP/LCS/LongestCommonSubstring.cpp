#include <bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string x, string y, int n, int m)
{
    // Intialization of a string in 2 D matrix multipication...
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Top down approach...
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 0;
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
    int result = longestCommonSubstring(x, y, n, m);
    cout << "Length  of Longest Common Substring: " << result << endl;

    return 0;
}
