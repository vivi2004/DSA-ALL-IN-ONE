#include <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int column)
{
    for (int row = 0; row < 3; row++)
f    {
        for (int column = 0; column < 4; column++)
        {
            if (arr[row][column] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    // Taking row wise  inputs

    // for (int row = 0; row < 3; row++)
    // {
    //     for (int column = 0; column < 4; column++)
    //     {
    //         cin >> arr[row][column];
    //     }
    // }

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element you wish to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found !!" << endl;
    }
    else
    {
        cout << "Not found !" << endl;
    }

    return 0;
}

