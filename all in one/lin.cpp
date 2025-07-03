//  linear search using  recursively...
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    
    cout << "Theh size of the array" << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] ;
    }
    cout << endl;
}
bool binarySearch(int arr[], int size, int k)
{
    print(arr,size);
    // base case...
    if (size == 0)
        return false;
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remaining = binarySearch(arr + 1, size - 1, k);
        return remaining;
    }
}
int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int k = 6;
    int ans = binarySearch(arr, size, k);
    if (ans)
    {
        cout << "The key value is found" << endl;
    }
    else
    {
        cout << "the key value is not found" << endl;
    }
}