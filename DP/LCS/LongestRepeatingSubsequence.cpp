#include <bits/stdc++.h>
using namespace std;
int LongestRepeationSubsequence(string s1, string s2, int n, int m)
{
    // Intiliazation..
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // Top dow appraoch..
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1] && i != j)
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter the first String:";
    cin >> s1;
    cout << "Enter the second String: ";
    cin >> s2;
    int result = LongestRepeationSubsequence(s1, s2);
    cout << "The reapated subsequence is:" << result << endl;

    return 0;
}
