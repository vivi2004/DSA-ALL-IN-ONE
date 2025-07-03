
#include <bits/stdc++.h>
using namespace std;

void decimal2Binary(int n)
{
    vector<int> binary;
    while (n > 0)
    {
        binary.push_back(n % 2);
        n = n / 2;
    }
    // print the binary digits in  reverse order....
    for (int i = binary.size() - 1; i >= 0; i--)
    {

        cout << binary[i] << " ";
    }
}

int removeLastBit(int n)
{
    return (n & (n - 1));
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the decimal :" << " ";
    cin >> n;

    int original = n;
    cout << "Binary representation  of" << original << endl;

    decimal2Binary(n);

    n = removeLastBit(n);

    cout << "After   removing the last bit:  " << original << n << endl;

    decimal2Binary(n);

    return 0;
}
