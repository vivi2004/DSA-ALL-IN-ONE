//  selection sort is basically we finding the  the minimum element in the  whole array of list elements and then compares
//  with the first unsorted array element and after  like that we considered...
#include <bits/stdc++.h>
using namespace std;

//  to find the minimu element in the array of list elements... 

int findMinimumIndex(int *arr, int start, int n)
{
    int minIndex = start;
    for (int i = start; i < n ; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

void  selectionSort(int *arr, int start, int n)
{
    //  base case....
    if (start > n - 1)
        return  ;
    //  to find the minimum index of the   unsorted array..
    int minIndex = findMinimumIndex(arr, start, n);

    // swap the elments of minimum index to the beginnig of the unsorted array...
    if (minIndex !=  start)
    {
        int temp = arr[minIndex];
        arr[minIndex] = arr[start];
        arr[start] = temp;
    }

    //    recursively call the function...
    selectionSort(arr, start + 1, n);
}

int main()
{
    int arr[] = { 3, 8, 1, 9,2,10,4 };
     selectionSort(arr,0,7);

    for ( int i =0; i<7;i++){
        cout<<arr[i]<<" " ;
    }
   
}
