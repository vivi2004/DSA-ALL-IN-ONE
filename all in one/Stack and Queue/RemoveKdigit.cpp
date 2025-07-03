#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k)
{
    string result = ""; // This will act as our stack

    for (char digit : num)
    {
        // Remove digits from the result if they are greater than the current digit
        // and we still have removals left (k > 0)
        while (!result.empty() && k > 0 && result.back() > digit)
        {
            result.pop_back(); // Equivalent to stack.pop()
            k--;
        }
        result.push_back(digit); // Equivalent to stack.push()
    }

    // If we still have more digits to remove, remove from the end
    while (k > 0 && !result.empty())
    {
        result.pop_back();
        k--;
    }

    // Remove leading zeros from the result
    int start = 0;
    while (start < result.size() && result[start] == '0')
    {
        start++;
    }

    // Create the final result after removing leading zeros
    result = result.substr(start);

    // If the result is empty, return "0"
    return result.empty() ? "0" : result;
}

int main(int argc, char const *argv[])
{
    string num;
    int k;
    cin >> num;
    cin >> k;
    string result = removeKdigits(num, k);
    cout << k << result << endl;

    return 0;
}
