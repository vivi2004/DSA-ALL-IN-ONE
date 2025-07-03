#include <iostream>
#include <string>
using namespace std;
void sayDigit(int n, string arr[])
{
    // base case
    if (n == 0)
        return ;
    //   processing
    int digit = n % 10;
    n = n / 10;
    //   recursively call  function..
    sayDigit(n, arr);

        cout << arr[digit] << " " << endl;
}

int main()
{

    string  arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;
    if (n == 0)
    {
        cout << arr[0] << endl;
    }
    else
    {
        sayDigit(n, arr);
        cout << endl;
    }
    return 0;
}
