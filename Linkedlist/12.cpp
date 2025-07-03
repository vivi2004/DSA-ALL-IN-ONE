#include <bits/stdc++.h>

class BinaryTreeNode
{
public:
    int data;
    BinaryTreeNode<int> *left;
    BinaryTreeNode<int> *right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void changeTree(BinaryTreeNode<int> *root)
{
    // check if the root is null or not
    if (root == NULL)
        return;
    int child = 0;
    // check for the summ for the left and right root nodes..

    if (root->left)
    {
        child += root->left->data;
    }
    if (root->right)
    {
        child += root->right->data;
    }
    if (child >= root->data)
        root->data = child;
    else
    {
        if (root->left)
            root->left->data = root->data;
        else
        {
            root->right->data = root->data;
        }
    }
    changeTree(root->left);
    changeTree(root->right);
    int total = 0;
    if (root->left)
        total += root->left->data;
    if (root->right)
        total += root->right->data;
    if (root->left || root->right)
        root->data = total;
}