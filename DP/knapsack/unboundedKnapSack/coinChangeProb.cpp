#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coin, int sum)
{
    // base case..
    int n = coin.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0)
                dp[i][j] = 0;
            if (j == 0)
                dp[i][j] = 1;
        }
    }
    // top down approach..
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= sum; j++)
        {
            if (coin[i - 1] <= j)
                dp[i][j] = dp[i][j - coin[i - 1]] + dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][sum];
}

int main(int argc, char const *argv[])
{

    int n, sum;

    cout << "ENter the number of Coins.";
    cin >> n;
    vector<int> coin(n);
    cout << "Enter the coin denomination:";

    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
        cout << "Enter the sum";
        cin >> sum;

        int ways = coinChange(coin, sum);
        cout << "Number of ways  to make sum" << sum << " is: " << ways << endl;
    }
    return 0;
}
