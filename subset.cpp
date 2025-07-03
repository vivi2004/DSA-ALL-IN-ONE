#include <iostream>
#include <vector>
#include <string>
using namespace std;

void findSubsets(const string &set)
{
    int n = set.size();
    int totalSubsets = 1 << n; // 2^n subsets

    cout << "Subsets of {" << set << "} are:\n";
    for (int i = 0; i < totalSubsets; ++i)
    {
        string subset = "";
        for (int j = 0; j < n; ++j)
        {
            // Check if jth bit in i is set. If yes, include set[j] in subset.
            if (i & (1 << j))
            {
                subset += set[j];
            }
        }
        cout << (subset.empty() ? "{}" : subset) << endl;
    }
}

int main()
{
    string a;

    cin >> a;
    findSubsets(a);
    return 0;
}
