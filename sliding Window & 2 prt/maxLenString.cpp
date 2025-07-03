#include <bits/stdc++.h>
using namespace std;
int maxLenString(const string &str)
{
    int n = str.size();

    if (str.size() == 0)
    {
        return -1;
    }
    int maxans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        unordered_set<int> set;
        for (int j = i; j < n; j++)
        {
            if (set.find(str[j]) != set.end())
            {
                maxans = max(maxans, j - i);
                break;
            }
            set.insert(str[j]);
        }
    }
    return maxans;
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int result = maxLenString(str);
    cout << result;
    return 0;
}
