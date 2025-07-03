//  IN this  we  should  return maxim sum of  kth consecutive elements....

#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int> &nums, int k)
{
    int n = nums.size();
    if (n < k)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    int maxSum = sum;
    int l = 0, r = k - 1;
    while (r < n - 1)
    {
        sum -= nums[l];
        l++;
        r++;
        sum += nums[r];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
};

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = maxSum(nums, k);
    if (result != -1)
    {
        cout << result << endl;
    }
    return 0;
}
