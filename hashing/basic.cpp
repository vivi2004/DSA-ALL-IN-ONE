#include<bits/stdc++.h>
using namespace std;




int main () {
 int n;
 cin>>n;
  int arr[n];
  for( int i =0;i<n; i++) {
    cin>>arr[i];
  }
//   prefetch.........
  int hash[13]={0};

  for( int i =0; i<n; i++) {
      hash[i] += 1;    
    }
    int t;
    cin>>t;
    //  fetch
   while(t--){
    int num;
    cin>>num;
     cout<<hash[num]<<endl;
   }

    }
    
