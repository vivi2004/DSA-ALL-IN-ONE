#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[2] = "vivie";
    m[1] = "lusifier";
    m[13] = "lust";
    m.insert({4,"lseura"});
    for (auto i : m)
    {
        cout << i.first << endl;
    }
    cout<<"-10 is present"<<m.count(-10)<<endl;
    m.erase(1);

    for (auto i : m)
    {
        cout << i.first << endl;
    }

}

