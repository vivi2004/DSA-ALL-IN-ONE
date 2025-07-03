//  for vector  space things........
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 2, 9, 7, 1};
    sort(v.begin(), v.end());  //  here begin uses as it  sorted the elements from begining and  end  to a range from begining to end
    for (int num : v)
    {
        cout << num << " " << endl;
    }
    cout << endl;
}
