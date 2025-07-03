#include <bits/stdc++.h>
using namespace std;

void kLargest(vector<int> &arr, int k)
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

    vector<int> result;
    while (!minHeap.empty())
    {
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    // // Sort in descending order
    // sort(result.rbegin(), result.rend());

    cout << "The " << k << " largest elements are: ";
    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    int n; // Number of elements in the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n); // Array to store elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k; // The k-th position
    cout << "Enter the value of k: ";
    cin >> k;

    if (k > 0 && k <= n)
    {
        kLargest(arr, k);
    }
    else
    {
        cout << "Invalid value of k. It should be between 1 and " << n << "." << endl;
    }

    return 0;
}
