// 25.1 Minimum numberof insertion and Deletion to convert String a  to String b.

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
int minOperationTOConvert(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    int lcs1 = LCS(s1, s2);
    int deletion = n - lcs1;
    int insertion = m - lcs1;
    return deletion + insertion;
}

int main(int argc, char const *argv[])
{
    string s1, s2;
    cout << "Enter first string:";
    cin >> s1;
    cout << "Enter second string:";
    cin >> s2;
    int result = minOperationTOConvert(s1, s2);

    cout << "Minimum no. of insertion and deletion  to convert first string into a second string: " << result << endl;

    return 0;
}
