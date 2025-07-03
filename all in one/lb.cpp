// lower_ boound and upper_ bound  in stl  in  binary search
#include <bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> &v, int element)
{
    int lo = 0, hi = v.size() - 1;
    int mid = (lo + hi) / 2;
    while (hi - lo > 1)
    {
        if (v[mid] < element)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
        if (v[lo] > element)
        {
            return lo;
        }
        if (v[hi] > element)
        {
            return hi;  
        }
         return -1;
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements:" << endl;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter the element:" << endl;
        cout << v[i] << endl;
    }
    int element;
    cin >> element;
    int lb = lower_bound(v, element);
    cout << lb << " " << v[lb] << endl;

    return 0;
}

