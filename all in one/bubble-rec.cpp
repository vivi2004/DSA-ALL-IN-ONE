//  we are  writing the bubble sort  using recursion  means we have to solve the one problem and rest will be solved by recursion itself...
//    so basically in  the  bubble sort we compare the neighbouring elements and swap them for sorting...
#include <bits/stdc++.h>
using namespace std;
int sortArray(int *arr, int n)
{
    //  base case  for bubble sort is  that either size is 0 or size is 1 it already sorted ...
    if (n == 0 || n == 1)
        return 1;
    //   Recursion solve the case for one problem
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    //  Recursive call   to solve  the case for multiple problems
    sortArray(arr,n-1);
}

int main(){
    //   this is  the way we  shoowcase the output  of the  files of ......   
    int arr[5]= {3,5,4,1,9};
      sortArray(arr,5);
     for ( int  i = 0;i <5; i++){
        cout<<arr[i]<<" ";
     }

     return 0;
}