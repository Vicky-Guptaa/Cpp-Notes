#include <iostream>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int key)
    {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

bool Search_Iterative(TreeNode *root, int key)
{
    if (!root)
        return 0;
    while (root)
    {
        if (root->data == key)
        {
            return true;
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return 0;
}

bool Search_Recursive(TreeNode *root, int key)
{
    if (!root)
        return 0;

    if (root->data == key)
    {
        return true;
    }
    else if (root->data > key)
    {
        return Search_Recursive(root->left, key);
    }
    else
    {
        return Search_Recursive(root->right, key);
    }
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(30);
    root->right->left = new TreeNode(15);

    cout << Search_Iterative(root, 31) << endl;
    cout << Search_Recursive(root, 8) << endl;
    return 0;
}