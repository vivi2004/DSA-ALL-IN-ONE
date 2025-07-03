#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> dp;

int eggsDrop(int e, int f)
{
    vector<vector<int>> dp(e + 1, vector<int>(f + 1, -1));
    // Base casese...
    if (f == 0 || f == 1)
        return f;
    if (e == 1)
        return f;
    if (dp[e][f] != -1)
        return dp[e][f];
    int mn = INT_MAX;
    for (int k = 1; k <= f; k++)
    {
        int breakCase, noBreakCase;
        if (dp[e - 1][k - 1] != -1)
            breakCase = dp[e - 1][k - 1];

        else
            breakCase = eggsDrop(e - 1, k - 1);
        dp[e - 1][k - 1] = breakCase;

        if (dp[e][f - k] != -1)
            noBreakCase = dp[e][f - k];
        else
            noBreakCase = eggsDrop(e, f - k);
        dp[e][f - k] = noBreakCase;

        int temp = 1 + max(breakCase, noBreakCase);
        mn = min(mn, temp);
    }
    return dp[e][f] = mn;
}

int main()
{
    int e, f;

    cout << "Enter the number of eggs: ";
    cin >> e;
    cout << "Enter the number of floors: ";
    cin >> f;
    dp.assign(e + 1, vector<int>(f + 1, -1));

    cout << "The number of floors eggs dropped" << eggsDrop(e, f) << endl;
    return 0;
}
