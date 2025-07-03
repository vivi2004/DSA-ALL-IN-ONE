#include<bits/stdc++.h>
using namespace std;
int print(int n){
    //base case
    if (n==0){
    return 1 ;
    }
    // cout<<n<<endl;    Tail recursion...
 
  print(n-1);
    cout<<n<<endl;  // Head recursion...z
}

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
  print(n-1);
}

