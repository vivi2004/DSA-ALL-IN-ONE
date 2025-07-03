#include<bits/stdc++.h>
using namespace std; 
int  secondLargestElement( vector<int> &arr) {
    //   first element 
    set<int > distinct_element( arr.begin(),arr.end()); // set  sort the elements  and uniquely identify then 
       if(arr.size()<2){
        return -1;
       }
    //  change the elements  set  in to vector for the further  indexing of the elements..
     vector<int> sorted_element (distinct_element.begin(), distinct_element.end());
   return  sorted_element[sorted_element.size()-2];
 

}
int main () {
    vector< int> arr=  { 3,6,6,7,8,3,9,18};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    cout<<  secondLargestElement(arr,8);
     return 0;
}