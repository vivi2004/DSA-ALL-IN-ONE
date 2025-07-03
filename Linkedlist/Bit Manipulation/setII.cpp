///

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

int setBit(int n, int i)
{
    return (n | (1 << i));
}

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the decimal :" << " ";
    cin >> n;
    decimal2Binary(n);
    cout << "Enter the position to set ( 0 - based indexing): ";
    cin >> i;
    n = setBit(n, i);
    cout << "After  setting the :" << i << "-th bit to 1 " << endl;
    decimal2Binary(n);

    return 0;
}
