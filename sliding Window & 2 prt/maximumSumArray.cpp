// To find the maximum sum of all subarrays of size K:

#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &nums, int k)
{
    int n = nums.size();
    // n must  be greater than k
    if (n <= k)
    {
        return -1;
    }
    // compute the sum of first window of size k ..
    int max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        max_sum = max_sum + nums[i];
    }
    // Compute sum of remaining windows by sliding thw windows
    int window_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += nums[i] - nums[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}