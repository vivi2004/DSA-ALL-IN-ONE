

#include <bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    // Intialization...
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Top down approach...
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

int LPS(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return LCS(s, rev);
}

int minimumNoOfDeletionInAStrin(string s)
{

    return (s.length() - LPS(s));
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int minDeletions = minimumNoOfDeletionInAStrin(s);
    cout << "Minimum number of deletions to make the string a palindrome: " << minDeletions << endl;

    return 0;
}
