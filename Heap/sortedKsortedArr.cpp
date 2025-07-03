// Sorted a k sorted Array..
#include <bits/stdc++.h>

using namespace std;

int sortedKSortedArray(vector<int> &arr)
{

    int n = arr.size();
    int k = n - 1;
    priority_queue<int, vector<int>, greater<int>> minH;

    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        minH.push(arr[i]);
        if (minH.size() > k)
        {
            vec.push_back(minH.top());
            minH.pop();
        }
    }
    while (!minH.empty())
    {
        vec.push_back(minH.top());
        minH.pop();
    }

    return vec;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    vector<int> result = sortedKSortedArray(arr);

    cout << "Sorted array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
