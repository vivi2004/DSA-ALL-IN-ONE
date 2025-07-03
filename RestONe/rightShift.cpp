#include<bits/stdc++.h>
using namespace std;
void rightShift( vector<int> &arr, int k){
    int  n= arr.size();
      k = k %n;
    //   revers the  first k element of  vector...
    reverse( arr.begin(),arr.end());
    //   reverse the rest of the vector  of k elements
    reverse(arr.begin(), arr.end()+k);
    //  reverse the rest of the vector ...
    reverse(arr.begin() +k ,arr.end());

}
int main () {
     vector<int> arr = { 1,2,3,4,5,6,7};
     int n= arr.size();
     int k = 3;
     rightShift(arr,k);
     for( int i =0;i< n; i++){
        cout<<arr[i]<< " ";
     }
   
}