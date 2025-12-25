// connected rope to  minimize the cost..
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int connectdRopeMinmCost(vector<int> &rope)
{
    int n = rope.size();
    priority_queue<int, vector<int>, greater<int>> minH;
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        minH.push(rope[i]);

        while (minH.size() > 2)
        {
            int first = minH.top();
            minH.pop();
            int second = minH.top();
            minH.pop();
            cost += first + second;
            minH.push(first + second);
        }
    }
    return cost;
}

int main()
{
    int n;
    // Get the number of ropes from the user
    cin >> n;

    vector<int> ropes(n);
    // Get the rope lengths from the user
    for (int i = 0; i < n; i++)
    {
        cin >> ropes[i];
    }

    cout << "Minimum cost to connect ropes: " << connectdRopeMinmCost(ropes) << endl;

    return 0;
}