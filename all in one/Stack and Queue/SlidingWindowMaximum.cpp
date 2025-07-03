#include <bits/stdc++.h>
using namespace std;
vector<int> slidingWindowMaximum(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> result;
    for (int i = 0; i < n - k; i++)
    {
        int maxi = nums[i];
        for (int j = 1; j < i + k - 1; j++)
        {
            maxi = max(maxi, nums[j]);
        }
        result.push_back(maxi);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int k, n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cin >> k;
    if (k > n || k <= 0)
    {
        cout << endl;
        return 1;
    }
    vector<int> result = slidingWindowMaximum(nums, k);
    for (int max_val : result)
    {
        cout << max_val << " ";
    }
    cout << endl;
    return 0;
}
