//  binary search using recursion   
# include<bits/stdc++.h>
using namespace std;
void print(int arr[],int s,int e){
    for( int i = s;i<=e;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
 bool binarySearch( int *arr, int s,int e , int k){
    //  base case
    print(arr,s,e);
    if (s>e)
    return  true;
    int mid = s+(e-s)/2;
    cout<<"Value of arr mid is:"<< arr[mid]<<endl;
     if (arr[mid]== k)
       return true;
    if (arr[mid]<k) {
        return binarySearch( arr,mid+1,e, k);
    }
    else {
        return binarySearch(arr,s,mid-1,k);
    }

 }

 int main(){
     int arr[6]= {2,4,6,10,14,16};
     int size = 6;
     int k= 16;
     cout<<" The  result is:"<<binarySearch(arr,0,5,k)<<endl;

     return 0;
 }