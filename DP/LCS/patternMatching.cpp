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
bool SeqPatternMatching(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int lcs_length = LCS(s1, s2, n, m);
    return (lcs_length == n);
}
int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter first string:";
    cin >> s1;
    cout << "Enter second string:";
    cin >> s2;
    if (SeqPatternMatching(s1, s2))
    {
        cout << "Yes , s1 is a subsequence of s2" << endl;
    }
    else
    {
        cout << "NO , s1 is not a subsequence of s2" << endl;
    }

    return 0;
}
