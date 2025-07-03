//  Adding the unsorted array using  using the  recursive function
#include<bits/stdc++.h>
using namespace std;
int sumArray( int arr[],int size,int index){
    //    base cases ...
    if(index >= size){    
        return 0;
     }
    //  recursively call the recursive function
    return arr[index]+ sumArray(arr,size,index+1);
}

int main(){
    int arr[ ] = { 3,2,5,1,6};
    int size =  sizeof(arr)/sizeof(arr[0]);
    int sum = sumArray(arr,size,0);
    cout<<" Sum of the array is :"<<sum<<endl;

}