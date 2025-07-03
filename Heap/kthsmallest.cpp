//  k th smallest Element...
// nlogn--> nlogk
//  maxHeap...

#include <bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> &arr, int k)
{
    priority_queue<int> maxHeap;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxHeap.push(arr[i]);
        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}
int main()
{
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    if (k > 0 && k <= n)
    {
        cout << "The " << k << "th smallest element is: " << kthSmallest(arr, k) << endl;
    }
    else
    {
        cout << "Invalid input for k. It should be between 1 and " << n << endl;
    }

    return 0;
}