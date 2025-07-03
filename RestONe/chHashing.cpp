#include<bits/stdc++.h>
using namespace std;
int main() {
     string s;
     cout<< " Enter a string ";
    cin>>s;

    int hash[26] = {0} ;
    //    prefetch ......
    for(int i =0; i<s.size() ; i++){
         hash[s[i]-'a']++;
    } 
    int q;
    cout<< "Enter the number of queries ";
    cin>>q;
    while(q--){ 
        char c;
        cout<< "Enter the  character of the query ";
        cin>>c;
        //  fetch\..
        cout<< hash[c-'a'] << endl;
    }
}