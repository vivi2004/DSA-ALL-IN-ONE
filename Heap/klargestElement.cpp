#include <bits/stdc++.h>
using namespace std;
int kLargestElement(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        minHeap.push(arr[i]);
        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    return 0;
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
        kLargestElement(arr, k);
    }
    else
    {
        cout << "Invalid input for k. It should be between 1 and " << n << endl;
    }

    return 0;
}