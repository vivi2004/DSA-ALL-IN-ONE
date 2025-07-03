#include <bits/stdc++.h>
using namespace std;

vector<int> k_Sorted(vector<int> &arr, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    
    vector<int> result;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        minHeap.push(arr[i]);
        if (minHeap.size() > k)
        {
            result.push_back(minHeap.top());

            minHeap.pop();
        }
    }
    while (minHeap.size() > 0)
    {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    return result;
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
        k_Sorted(arr, k);
    }
    else
    {
        cout << "Invalid value of k. It should be between 1 and " << n << "." << endl;
    }

    return 0;
}
