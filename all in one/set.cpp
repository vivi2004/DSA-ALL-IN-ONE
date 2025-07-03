#include <bits/stdc++.h>
#include<set>
using namespace std;
int mian()
{
    set<int> s ;
    s.insert(1);
    s.insert(9);
    s.insert(2);
    s.insert(6);
    s.insert(2);
    s.insert(9);
    s.insert(6);
    s.insert(9);
    s.insert(1);
    s.insert(6);
    s.insert(9);
    for (auto i : s)
    {
        cout << i << endl;
    }
}
