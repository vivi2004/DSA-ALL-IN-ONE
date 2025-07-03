#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements " ;
      cin >> n;
    int arr[n];
    cout << " Enter the elements of the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cout << "Enter the number of queries ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter the index of the query" << endl;
        cin >> num;
        cout << " Frequency of the element " << num << "is " << mpp[arr[num]]<< endl;
    }
}
