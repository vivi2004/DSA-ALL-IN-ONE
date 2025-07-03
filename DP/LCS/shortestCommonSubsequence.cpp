#include <bits/stdc++.h>
using namespace std;

int shortestCommonSubsequence(string s1, string s2, int n, int m)
{
    // INtialization...
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Top-down approach...
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
    return m + n - dp[n][m];
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter first string:";
    cin >> s1;
    cout << "Enter second string:";
    cin >> s2;
    int n = s1.size();
    int m = s2.size();
    int result = shortestCommonSubsequence(s1, s2, n, m);
    cout << "Length  of  shortest common Substring: " << result << endl;

    return 0;
}
