#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &num1)
{
    stack<int> st;
    int n = num1.size();
    vector<int> nge(n, -1); // Initialize with -1 for all elements (no next greater element by default)

    for (int i = n - 1; i >= 0; i--) // Traverse from right to left
    {
        // Pop elements from the stack if they are smaller or equal to the current element
        while (!st.empty() && st.top() <= num1[i])
        {
            st.pop();
        }

        // If stack is not empty, then the top of the stack is the next greater element
        if (!st.empty())
        {
            nge[i] = st.top();
        }

        // Push the current element onto the stack
        st.push(num1[i]);
    }
    return nge;
}

int main()
{
    int n;
    cin >> n; // Take input for the number of elements

    vector<int> num1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num1[i]; // Take input for the elements of the array
    }

    vector<int> nge = nextGreaterElement(num1);

    // Output the result
    for (int i = 0; i < nge.size(); i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}