//   reverse of the strign using  recursive function
// Although we solve this problem using loop  conditions  like consider two element i,j,   and swap the function using  (s<e)..
//   for using recursion first  is base case and   and then recursive function solve for one and remains other for the rest to be solved;
#include<bits/stdc++.h>
using namespace std;
void reverse ( string&  str, int i,int n){
    //  base case
    if (i>n-i-1)
    return ;
    swap(str[i],str[n-i-1]);
    i++;
   ( n-i-1)--;
    //  Recursion .......
     reverse(str,i,n-i-1);

}
int main(){
    string  name = "vivekPurbey";
    int n= 11;
     reverse( name,0, name.length()-1);
    cout<< name;
}



