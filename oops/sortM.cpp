#include<bits/stdc++.h>
using namespace std;
   void sort(vector<int>& arr ,int n) {
    for ( int i =0;i<=n-1;i++) {
        for ( int j= i+1; j<=n; j++) {
             if ( arr[i]> arr[j])  {
                swap( arr[i],arr[j]);
             }
        }
    }
   }
int main () {
   vector< int> arr = { 2,7,3,9,5};
   int n= arr.size();
   sort(arr,n);
   for( int i = 0; i<=n; i++) {
     cout<< arr[i]  << endl;; 
   }
    
}