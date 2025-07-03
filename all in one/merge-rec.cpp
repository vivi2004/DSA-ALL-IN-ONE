// We are using the merge sort function..... using  recursively
//  so basically in the  merge sort  we divide the  the array of the elements   in the mid of the arrya and  continuing the same pattern and after that we merged it...
// It is very  fast in all the above cases....
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //  copy the values in the new array forming....
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    //    copy the values in the second array form ...
     int p  = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }

    //   merge the values in the sorted order....
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[k++] = arr1[index1++];
        }
        else
        {
            arr[k++] = arr2[index2++];
        }
    }
}

void merge_sort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    //    base casese....
    if (s >= e)
    {
        return;
    }
    //   left part sort
    merge_sort(arr, s, mid);
    //   right part sort
    merge_sort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[5] = {6, 1, 8, 3, 9};
    int n = 5;
    merge_sort(arr, 0, n );
    for (int i = 0; i < n -1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}