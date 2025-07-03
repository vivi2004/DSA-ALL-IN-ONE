#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> subArrayMin(vector<int> &nums)
    {
        int n = nums.size();
        long long result = 0;
        long long mod = 1e9 + 7;

        vector<int> pse = calculatePSE(nums);
        vector<int> nse = calculateNSE(nums);

        // Calculate the contribution of each element
        for (int i = 0; i < n; i++)
        {
            long long count = (long long)(i - pse[i]) * (nse[i] - i);
            result = (result + count * nums[i]) % mod;
        }

        return vector<int>{(int)result};
    }

private:
    vector<int> calculatePSE(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> st;
        vector<int> pse(n);

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return pse;
    }

    vector<int> calculateNSE(vector<int> &nums)
    {
        int n = nums.size();
        stack<int> st;
        vector<int> nse(n);

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
            {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return nse;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums1[i];
    }

    cout << subArrayMin(nums1) << endl;
    return 0;
}
