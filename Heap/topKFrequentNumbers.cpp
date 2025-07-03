#include <bits/stdc++.h>
using namespace std;

int topKFrequentNumber(vector<int> &nums, int k)
{
    // To store frequency we have to made a hash mapping..
    int n = nums.size();
    unordered_map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        mapp[nums[i]]++;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minH;
    for (auto i = mapp.begin(); i != mapp.end(); i++)
    {
        minH.push({i->second, i->first});
        if (minH.size() > k)
        {
            minH.pop();
        }
    }
    vector<int> result;
    while (!minH.empty())
    {
        result.push_back(minH.top().second);
        minH.pop();
    }
    reverse(result.begin(), result.end());
    for (int num : result)
    {
        cout << num << endl;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Top " << k << " Frequent Numbers:" << endl;
    topKFrequentNumber(nums, k);

    return 0;
}
