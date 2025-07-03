#include <iostream>
#include <array>
using namespace std;
int main()
{
    int p[3] = {1, 2, 3};
    array<int, 4> a = {3, 5, 6, 7};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
        cout << a.at(1) << endl;
        cout << a.begin() << endl;
        cout << a.back() << endl;
        cout<<a.empty()<<endl;
        cout<<a.front(1)<<endl;
    }
}