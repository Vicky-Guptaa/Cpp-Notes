#include <iostream>
#include <queue>
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

void In_Traversal(TreeNode *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    In_Traversal(root->left);
    In_Traversal(root->right);
}

void Traversal(TreeNode *root)
{
    if (!root)
        return;
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty())
    {
        int size = que.size();
        while (size--)
        {
            root = que.front();
            cout << root->data << " ";
            que.pop();
            if (root->left)
                que.push(root->left);
            if (root->right)
                que.push(root->right);
        }
        cout << endl;
    }
}

TreeNode *Insert_Recursive(TreeNode *root, int key)
{
    if (!root)
    {
        TreeNode *newnode = new TreeNode(key);
        return newnode;
    }
    if (root->data > key)
        root->left = Insert_Recursive(root->left, key);
    else if (root->data < key)
        root->right = Insert_Recursive(root->right, key);
    return root;
}

void Insert_iterative(TreeNode *root, int key)
{
    TreeNode *newnode = new TreeNode(key);
    if (!root)
    {
        root = newnode;
        return;
    }
    while (root->left || root->right)
    {
        if (root->data == key)
        {
            return;
        }
        else if (root->data > key)
        {
            if (!root->left)
                break;
            root = root->left;
        }
        else
        {
            if (!root->right)
                break;
            root = root->right;
        }
    }
    if (root->right)
        root->left = newnode;

    else
        root->right = newnode;
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(1);
    root->right->right = new TreeNode(30);
    root->right->left = new TreeNode(15);
    In_Traversal(root);
    cout << endl;
    // Insert_iterative(root, 0);
    Insert_Recursive(root,0);
    In_Traversal(root);
    return 0;
}