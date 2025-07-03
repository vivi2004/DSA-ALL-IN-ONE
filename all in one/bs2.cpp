#include <bits/stdc++.h>
using namespace std;
int firstOccuren(int arr[], int n, int key)
{
   int s = 0, e = n - 1;
   int mid = e + (s - e) / 2;
   int ans = -1;
   while (s <= e)
   {
      if (arr[mid] == key)
      {
         ans = mid;
         e = mid - 1;
      }
      else if (key > arr[mid])
      {
         s = mid + 1;
      }
      else
      {
         e = mid - 1;
      }
      mid = s + (s - e) / 2;
   }

   return ans;

   
}
int lastOccuren(int arr[], int n, int key)
{
   int s = 0, e = n - 1;
   int mid = e + (s - e) / 2;
   int ans = -1;
   while (s <= e)
   {
      if (arr[mid] == key)
      {
         ans = mid;
         s = mid + 1;
      }
      else if (key > arr[mid])
      {
         s = mid + 1;
      }
      else
      {
         e = mid - 1;
      }
      mid = s + (s - e) / 2;
   }

   return ans;

   
}

int main()
{
   int arr[7] = {1, 2, 3, 3, 6,7,3};
   cout << "last  occurence of 3 is :" << firstOccuren(arr, 7, 3) << endl;
   cout << "last  occurence of 3 is :" << lastOccuren(arr, 7, 3) << endl;
   return 0;
}
  