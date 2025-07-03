// Check if the i th bit is set or not...
//  Convert it into a  binary and then traverse the.... bit ..
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

void checkBit(int n, int i)
{
    if (n & (1 << i) != 0)
    {
        cout << "The   bit is set(1)" << endl;
    }
    else
    {
        cout << "The   bit is not set(0)" << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n, i;
    cout << "Enter the decimal :" << " ";
    cin >> n;
    decimal2Binary(n);
    cout << "Enter the bit position to checkt ( 0- based index) : " << endl;
    cin >> n;

    checkBit(n, i);

    return 0;
}
