// Maximum points you can obtain from the cards...
// In this basically  ,  THere is some  instructions..
//    1. first one is ... you can either pick up element from the first ot
// pick up  the  element from the last... and it is in consecutive orderss...

#include <bits/stdc++.h>
using namespace std;

int sumOfMaxPoint(vector<int> &nums, int k)
{
    int n = nums.size();
    int lSum = 0, rSum = 0, maxSum = 0;

    for (int i = 0; i < k; i++)
    {
        lSum += nums[i];
    }
    maxSum = lSum;
    int rIndex = n - 1;
    for (int i = k; i >= 0; i--)
    {
        lSum = lSum - nums[i];
        rSum = rSum + nums[rIndex];
        rIndex--;
        maxSum = max(maxSum, lSum + rSum);
    }

    return maxSum;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = sumOfMaxPoint(nums, k);
    cout << result << endl;

    return 0;
}
