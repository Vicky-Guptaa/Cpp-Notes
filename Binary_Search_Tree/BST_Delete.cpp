#include<iostream>
#include<queue>
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

void In_Traversal(TreeNode*root)
{
    if(!root)return;
    cout<<root->data<<" ";
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

TreeNode* Delete(TreeNode*root,int key)
{
    if(!root)
    {
        return nullptr;
    }
    else if(root->data>key)
    {
        root->left=Delete(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=Delete(root->right,key);
    }
    else 
    {
        if(root->left==nullptr)
        {
            TreeNode*temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==nullptr)
        {
            TreeNode*temp=root->left;
            delete root;
            return temp;
        }
        TreeNode*Parent=root;
        TreeNode*Succ=root->right;
        while(Succ->left!=nullptr)
        {
            Parent=Succ;
            Succ=Succ->left;
        }
        if(Parent==root)
        {
            Parent->right=Succ->right;
        }
        else
        {
            Parent->left=Succ->right;
        }
        root->data=Succ->data;
        delete Succ;
        return root;
    }
    return root;
}

int main(){
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(1);
    root->right->right = new TreeNode(30);
    root->right->left = new TreeNode(15);
    In_Traversal(root);
    Delete(root,4);
    cout<<endl;
    In_Traversal(root);
    return 0;
}