//  it's basically a src and destiny problem using  recursive calls  and their base cases
#include<bits/stdc++.h>
using namespace std;

  void reachHome( int src,int dest){
     cout<<" searching" <<src<<" destiny"<< dest<< endl;
    //  base case...
    if ( src == dest){ 
     
         cout<<"Finally reached Home"<<endl;
      return  ;
    }

    //   one steps increasing by each call.... 
     src++;
//     recursive call...
    reachHome(src,dest);
}

int main (){
   
     int dest =10;
     int  src =0;
    cout<<endl;
    reachHome(src,dest);
}