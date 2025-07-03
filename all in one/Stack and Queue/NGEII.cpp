#include <bits/stdc++.h>
using namespace std;

vector<int> NGEII(vector<int> &num1)
{
    stack<int> st;
    int n = num1.size();
    vector<int> nge(n, -1);
    stack<int> st;
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= num1[i % n])
        {
            st.pop();
        }
        if (i < n)
        {
            nge[i] = st.empty() ? -1 : st.top();
        }
        st.push(num1[i % n]);
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

    vector<int> nge = NGEII(num1);

    // Output the result
    for (int i = 0; i < nge.size(); i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl;

    return 0;
}