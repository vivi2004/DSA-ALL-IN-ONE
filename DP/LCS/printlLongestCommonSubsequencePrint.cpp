#include <bits/stdc++.h>
using namespace std;
int longestCommonSubsequencePrint(string s1, string s2, int n, int m)
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

    string s = " ";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            s.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (dp[i][j - 1] > dp[i - 1][j])
                j--;
            else
                i--;
        }
    }
    reverse(s.begin(), s.end());
    cout << "Longest Common  Subsequence:" << s << endl;
    return dp[n][m];
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

    int print = longestCommonSubsequencePrint(s1, s2, n, m);
    cout << "The expected length of the substring :" << print << endl;

    return 0;
}
