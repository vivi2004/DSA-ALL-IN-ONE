// Matrix chain multiplications...
// Identfication and format..

#include <bits/stdc++.h>
using namespace std;
int MCM(vector<int> &nums, int i, int j)
{
    // base case..

    if (i >= j)
        return 0;
    // Move k -> i to j
    int min = INT_MAX;

    for (int k = i; k <= j - 1; k++)
    {
        // Temproary answer.
        int tempAns = MCM(nums, i, k) + MCM(nums, k + 1, j) + nums[i - 1] * nums[k] * nums[j];
        if (tempAns < min)
        {
            min = tempAns;
            f
        }
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}
