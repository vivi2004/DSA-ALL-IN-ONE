// To find the minimum no. of coin whose sum is queal to  given  sum ...
#include <bits/stdc++.h>
using namespace std;

int coinChange2(vector<int> &coins, int sum)
{
    int n = coins.size();
    // initialization..
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX - 1));

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    for (int j = 1; j <= sum; j++)
    {
        if (j % coins[0] == 0)
            dp[1][j] = j / coins[0];
        else
        {
            dp[1][j] = INT_MAX - 1;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (coins[i - 1] <= j)
                dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return (dp[n][sum] == INT_MAX - 1) ? -1 : dp[n][sum];
}

int main(int argc, char const *argv[])
{

    int n, sum;
    cout << "Enter the number of coin types: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the coin denominations: ";
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    cout << "Enter the required sum: ";
    cin >> sum;

    int result = coinChange2(coins, sum);

    if (result == -1)
        cout << "Not possible to form the sum using given coins." << endl;
    else
        cout << "Minimum number of coins required: " << result << endl;

    return 0;
}
