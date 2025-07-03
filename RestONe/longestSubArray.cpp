//   Longest subarray is on hold for tommorow.....


#include<bits/stdc++.h>
using namespace std;
     int longestSubArraySum( vector<int> &arr, int k, int n) {
        int maxLen=0;
        int sum =0;
        int start = 0;
        for( int end =0;end< n-1 ; end++) {
         sum+= arr[end];
         while ( sum>k && start<=end)
         {
             sum-= arr[start];
             start++;
         }
          maxLen= max( maxLen,end-start+1);

        } 
         return maxLen;
     }




int main(){
   vector<int> arr= { 4,6,7,8,9,12,3,4}; 
   int n = arr.size();  
    cout<<longestSubArraySum(arr,6, n);
    return 0;
}
    