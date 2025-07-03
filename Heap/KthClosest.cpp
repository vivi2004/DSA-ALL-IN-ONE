// k th closest number
#include <bits/stdc++.h>
using namespace std;

int kthClosestElement(vector<int> &nums, int k, int x)
{
    priority_queue<pair<int, int>> maxHeap;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        maxHeap.push({abs(nums[i] - x), nums[i]});
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    while (!maxHeap.empty())
    {
        cout << maxHeap.top().second << endl;

        maxHeap.pop();
    }
}

int main()
{
    int n, k, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the value of x: ";
    cin >> x;

    kthClosestElement(nums, k, x);

    return 0;
}