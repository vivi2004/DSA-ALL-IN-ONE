#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size)
{
    //  base cases
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[6] = {1,4,5,6,7,8};
    int size = 6;
    bool ans = isSorted(arr, size);
    
    cout<<arr[0]<<""<<endl;
    if (ans)
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Not sorted yet !!!" << endl;
    }
}