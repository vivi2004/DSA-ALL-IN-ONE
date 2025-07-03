#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v; 
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(12);
    cout<<"is 5  is there"<<binary_search(v.begin(),v.end(),5)<<" "<<endl;
    cout<< "Lower bound is  :"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound is: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
  int a=5,b=8;
  cout<<"max"<<max(a,b)<<endl;
  cout<<"min"<<min(a,b)<<endl;
}




