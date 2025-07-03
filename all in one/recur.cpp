#include<bits/stdc++.h>
using namespace std;
 int factorial( int n){
    if (n== 0)
        return 1;
        int lower = factorial(n-1);
        int upper = n*lower;
        return upper;
   
 }
 int main(){
   int n;
   cin>>n;
   int ans= factorial(n);
   cout<<ans<<endl;
 }
