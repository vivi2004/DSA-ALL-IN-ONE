
#include <bits/stdc++.h>
using namespace std;

// This is the bruetforce approach  for the  following   algorithm
//  Having the time complexity of  O(n^2)
// ANd space complexity of  O(1);

// int sumOfLargestSubarrayRange(vector<int> &nums)
// {
//     int n = nums.size();
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int lagrgest = nums[i], smallest = nums[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             lagrgest = max(lagrgest, nums[j]);
//             smallest = min(smallest, nums[j]);
//             sum = sum + (lagrgest - smallest);
//         }
//     }
//     return sum;
// }
// we have to optimized this code as ....
//  Have we done in this  sumof subarrAYMaxim  and sumOF subarrya minimum...  and we have to returning of the max - min..

int sumOfLargestSubarrayRange(vector<int> &nums)
{
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = sumOfLargestSubarrayRange(nums);
    cout << result << endl;
    return 0;
}
