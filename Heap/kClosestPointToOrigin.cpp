//  k closest point to origin..
#include <bits/stdc++.h>
using namespace std;
int kClosestPointToOrigin(vector<vector<int>> &nums, int k)
{
    priority_queue<pair<int, pair<int, int>>> maxH;
    int n = nums.size();

    vector<vector<int>> vec(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        int dist = nums[i][0] * nums[i][0] + nums[i][1] * nums[i][1];
        maxH.push({dist, {nums[i][0], nums[i][1]}});
        while (maxH.size() > k)
            maxH.pop();
    }
    while (!maxH.empty())
    {
        cout << "(" << maxH.top().second.first << ", " << maxH.top().second.second << ")" << endl;
        maxH.pop();
    }
}
int main()
{
    int n, k;
    cout << "Enter the number of points: ";
    cin >> n;
    vector<vector<int>> nums(n, vector<int>(2));

    cout << "Enter the points (x, y):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i][0] >> nums[i][1];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    kClosestPointToOrigin(nums, k);

    return 0;
}