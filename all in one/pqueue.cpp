#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(2);
    maxi.push(3);
    maxi.push(7);
    maxi.push(9);
    int n= maxi.size();
    for (int i = 0; i< n ; i++)
    {
        cout << maxi.top()<< " " << endl;
        maxi.pop();

    }
    cout<<endl;
}

    mini.push(2);
    mini.push(3);
    mini.push(7);
    min.push(9);
    int m= mini.size();
    for (int i = 0; i< m ; i++)
    {
        cout << mini.top()<< " " << endl;
        mini.pop();

    }
    cout<<endl;





