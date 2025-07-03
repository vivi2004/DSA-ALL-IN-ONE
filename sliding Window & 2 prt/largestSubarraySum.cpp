// Here is the bruetforce appraoch for the given questionss

// bruetforce appraoch for the given question having time complexity of O(n^2)...
#include <bits/stdc++.h>
using namespace std;
int largestSubarraySum(vector<int> &nums, int k)
{
    // r -> expand  : l -> shrink...

    int n = nums.size();
    int l = 0, r = 0;
    int sum = 0;
    int maxLen = 0;
    while (r < n)
    {
        sum += nums[r];
        while (sum > k)
        {
            sum = sum - nums[l];
            l++;
        }
        if (sum <= k)
        {
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
    }
    return maxLen;
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
    int result = largestSubarraySum(nums, k);
    cout << result << endl;

    return 0;
}

// int largestSubarraySum(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     int maxLen = 0;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             sum += nums[j];
//             if (sum <= k)
//             {
//                 maxLen = max(maxLen, j - i + 1); // here  j-i+ 1  is  number of element from i to j inclusive..
//             }
//             else if (sum > k)
//                 break;
//         }
//     }
//     return maxLen;
// }
