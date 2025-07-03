#include <bits/stdc++.h>
using namespace std;
// Memoization.. Table..

vector<vector<int>> t(1001, vector<int>(1001, -1));
// Function to check if a substring is a palindrome..

bool isPalindrome(string str, int i, int j)
{
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
}

int pallindromePationing(string str, int i, int j)

{
    // base cases..
    if (isPalindrome(str, i, j))
        return false;

    if (i >= j)
    {
        return 0;
    }
    if (t[i][j] != -1)
    {
        return t[i][j];
    }
    // Temproary answer..
    int mn = INT_MAX;
    int left, right;
    for (int k = i; k <= j - 1; k++)
    {
        if (t[i][k] != -1)
        {
            left = pallindromePationing(str, i, k);
            t[i][k] = left;
        }

        if (t[k + 1][j] != -1)
        {

            right = t[k + 1][j];
        }
        else
        {
            right = pallindromePationing(str, k + 1, j);
        }

        int tempAns = 1 + left + right;

        mn = min(mn, tempAns);
    }

    return t[i][j] = mn;
}
