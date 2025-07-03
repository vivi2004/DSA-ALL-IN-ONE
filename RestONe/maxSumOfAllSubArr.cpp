#include <bits/stdc++.h>
using namespace std;
//    max sum of the  k the number  of elements....

int maxSum(vector<int> & arr, int n, int k)
{
  //      intializing the result ../
  int max_sum = INT_MIN;
  for (int i = 0; i < n - k  ; i++)
  {
    int current_sum = 0;
    for (int j = 0; j < k ; j++)
    {
      current_sum += arr[i + j];
      max_sum =  max( current_sum, max_sum);
    }
  }
  return max_sum;
}

int main()
{
   vector<int > arr = { 3,7,8,9,10,34,7};

   int n = arr.size();

     cout<<maxSum( arr,n,6);
    


  return 0;
}