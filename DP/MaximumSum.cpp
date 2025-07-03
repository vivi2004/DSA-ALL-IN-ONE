// Maximum Path Sum from any node to any node....
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
int maximumPathSum(Node *root, int &res)
{
    if (root == nullptr)
        return 0;
    int l = maximumPathSum(root->left, res);
    int r = maximumPathSum(root->right, res);
    int temp = max(max(l, r) + root->data, root->data);
    int ans = max(temp, l + r + root->data);

    res = max(res, ans);
    return ans;
}
