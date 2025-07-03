#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(4, 1000);
    for (int i : n)
    {
        cout << i << "" << endl;
    }
    cout<<endl;
    l.push_back(2);
    for (int i : l)
    {
        cout << i << endl;
    }
    l.push_front(9);
    for (int i : l)
    {
        cout << i << endl;
    }
}
