//   palindrome  using recursion.... 
#include<bits/stdc++.h>
using namespace std;
bool palindrom(int i, string  &str){
    //  base cases
    if(i>= str.size()-i-1)
    return   true;

  if (str[i] != str[str.size()-i-1]) {
     return false;
}

  else {
    return  palindrom(i+1, str);
     
  }


}
int main(){
   #ifndef  ONLINE_JUDGE
   freopen("inpt.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   string s = " madm";
   palindrom(0,s);
}
//     string name = "abbccbba";
//      bool ans = palindrom( name ,0, name.length()-1);
//      if (ans) {
//         cout<< " It is palindrome"<< endl;
//      }
//       else {
//         cout<<" It is not a palindrome";
//       }
// }  
 