#include <bits/stdc++.h>
using namespace std;

vector<int> previousSmallestElement(vector<int> &nums)
{
    stack<int> st;
    int n = nums.size();
    vector<int> pse(n);

    for (int i = 0; i < n; i++)
    {
        // Pop the element from the stack that are  grater than or equal to nums[i]
        while (!st.empty() && st.top() >= nums[i])
        {
            st.pop();
        }
        //    If the stack is empty , no smalller  element  on the left
        if (st.empty())
        {
            pse[i] = -1;
        }
        else
        {

            pse[i] = st.top(); // The top element is the previous smaller element..
        }
        st.push(nums[i]);
    }
    return pse;
}

vector<int> nextSmallestElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> nse(n);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        // pop the element from the stack that is greater than or equal to nums[i]
        while (!st.empty() && st.top() >= nums[i])
        {
            st.pop();
        }
        //  If the stack is empty  , no smaller element to the rigt
        if (st.empty())
        {
            nse[i] = -1;
        }
        else
        {
            nse[i] = st.top();
        }
        st.push(nums[i]);
    }
    return nse;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    // vector<int> pse = previousSmallestElement(nums);
    // for (int i = 0; i < pse.size(); i++)
    // {
    //     cout << pse[i] << "  ";
    // }
    // cout << endl;

    vector<int> nse = nextSmallestElement(nums);
    for (int i = 0; i < nse.size(); i++)
    {
        cout << nse[i] << "  ";
    }
    cout << endl;

    return 0;
}
