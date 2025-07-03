#include <bits/stdc++.h>
using namespace std;

priority_queue<int> maxH;
int kthSmallestElement(vector<int> &arr, int k)
{
    int m = arr.size();
    for (int i = 0; i < m; i++)
    {
        maxH.push(arr[i]);
        if (maxH.size() > k)
        {
            maxH.pop();
        }
    }
    return maxH.top();
}
int main(int argc, char const *argv[])
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
        int result = kthSmallestElement(arr, k);
        cout << "The " << k << "-th smallest element is: " << result << endl;
    }
    else
    {
        cout << "Invalid value of k. It should be between 1 and " << n << "." << endl;
    }

    return 0;
}