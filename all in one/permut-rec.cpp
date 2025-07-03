//  permutation using  recursivly
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    //  base cases
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index);
        //     backtracking...
        swap(nums[index], nums[j]);
    }
}

vector<vector>int>> permutate(vector<int> &nums)
{
    vector<int> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main (){
    int numbers = [1,2,3];
    solve(numbers,ans,0);
    for ( int i =0;i<numbers;i++){
        cout<<numbers[i]<<"  ";

    }
    cout<<endl;
}