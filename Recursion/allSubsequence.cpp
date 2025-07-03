#include <bits/stdc++.h>
using namespace std;

void printSubRec(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    printSubRec(ip, op1);
    printSubRec(ip, op2);
}
int main()
{
    string ip;
    cin >> ip;
    string op = "";
    printSubRec(ip, op);
    return 0;
}
