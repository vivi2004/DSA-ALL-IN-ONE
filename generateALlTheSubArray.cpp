#include <bits/stdc++.h>
using namespace std;
int generateAllTheSubarray(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << nums[k];
            }
            cout << endl;
        }
    }
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
    generateAllTheSubarray(nums);

    return 0;
}
