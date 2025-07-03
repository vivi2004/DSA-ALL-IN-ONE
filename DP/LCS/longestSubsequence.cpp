// so we have to  return the length of longestSubsequence  in a string..
//  recursive .. subsequences..

#include <bits/stdc++.h>
using namespace std;

int LCS(string x, string y, int n, int m)
{
    // Base.. cases..
    if (n == 0 || m == 0)
        return 0;
    // we chek for the  smallest  ones...
    if (x[n - 1] == y[m - 1])
        return (1 + LCS(x, y, m - 1, n - 1));
    // choice diagram..
    else
    {
        return max(LCS(x, y, m - 1, n), LCS(x, y, m, n - 1));
    }
}

int main(int argc, char const *argv[])
{
    string x, y;
    cout << "Enter first string:";
    cin >> x;
    cout << "Enter second string:";
    cin >> y;
    int n = x.size();
    int m = y.size();
    int result = LCS(x, y, n, m);
    cout << "Length  of Longest Common Subsequence: " << result << endl;

    return 0;
}

// Recursive  you have to convert it into
// 1 Memoize the code
// 2 Top down appraoch..
