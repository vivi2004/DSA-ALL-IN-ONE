#include <bits/stdc++.h>
using namespace std;

vector<int> AsteroidCollision(vector<int> &nums)
{
    stack<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        bool destroyed = false;

        while (!st.empty() && nums[i] < 0 && st.top() > 0)
        {
            if (st.top() < abs(nums[i]))
            {
                st.pop(); // Top asteroid is destroyed
            }
            else if (st.top() == abs(nums[i]))
            {
                st.pop(); // Both asteroids destroy each other
                destroyed = true;
                break;
            }
            else
            {
                destroyed = true; // Incoming asteroid is destroyed
                break;
            }
        }

        if (!destroyed)
        {
            st.push(nums[i]); // Add the current asteroid if it's not destroyed
        }
    }

    // Convert stack to vector in reverse order (since stack is LIFO)
    vector<int> result(st.size());
    for (int i = st.size() - 1; i >= 0; --i)
    {
        result[i] = st.top();
        st.pop();
    }

    return result;
}

int main()
{
    int n;

    cin >> n;

    vector<int> asteroids(n);

    for (int i = 0; i < n; i++)
    {
        cin >> asteroids[i];
    }

    vector<int> result = AsteroidCollision(asteroids);

    for (int asteroid : result)
    {
        cout << asteroid << " ";
    }

    return 0;
}
