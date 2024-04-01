#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* &root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    // for left node
    cout<<"enter the data in left of "<<data<<endl;
    root->left=buildTree(root->left);
    // for right node
    cout<<"enter the data in right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* &root){
    
}
int main()
{
    // root define krenge jo nothing data lega
    node *root = NULL;

    // create a tree node
    root=buildTree(root);

    return 0;
}