#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int to_find;
    // cout << "Enter the element to find: " << endl;
    cin >> to_find;

    // Sort the vector before performing binary search
    sort(v.begin(), v.end());

    int lo = 0, hi = n - 1;
    while (hi - lo > 1) {
        int mid = (lo + hi) / 2;
        if (v[mid] < to_find) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }

    if (v[lo] == to_find) {
        cout << "Element found at index: " << lo << endl;
    } else if (v[hi] == to_find) {
        cout << "Element found at index: " << hi << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
