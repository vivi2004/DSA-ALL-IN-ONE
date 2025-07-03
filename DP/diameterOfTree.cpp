// Diameter of a binary Tree..
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

int solve(Node *root, int &res)
{
    // Base.  cases..
    if (root == nullptr)
        return 0;
    int l = solve(root->left, res);
    int r = solve(root->right, res);
    int temp = max(l, r) + 1;
    int ans = max(temp, 1 + l + r);
    res = max(res, ans);

    return temp;
}

int diameter(Node *root)
{
    int res = INT_MIN;
    solve(root, res);
    return res;
}
// Function to build a binary tree from user input
Node *buildTree()
{
    int data;
    cout << "Enter node value (-1 for NULL): ";
    cin >> data;
    if (data == -1)
        return nullptr;

    Node *root = new Node(data);
    cout << "Enter left child of " << data << endl;
    root->left = buildTree();
    cout << "Enter right child of " << data << endl;
    root->right = buildTree();

    return root;
}
