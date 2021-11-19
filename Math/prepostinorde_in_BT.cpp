#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   node *left,*right;
};
struct node* create()
{
    int x;
    node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    cout<<"Enter data !-- Enter -1 for no data --! :"<<endl;
    cin>>x;
    if(x==-1)
       return 0;
    newnode->data = x;
    cout<<"Enter left child of "<<x<<endl;
    newnode->left = create();
    cout<<"Enter right child of "<<x<<endl;
    newnode->right = create();
    return newnode;
}
void preorder(struct node *root)
{
    if(root == NULL)
        return;
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";
}

int main()
{
   struct node* root;
   root = NULL;
   root = create();
   cout<<"INORDER TRAVESAL OF A TREE :"<<endl;
   inorder(root);
   cout<<"\n";
   cout<<"POSTORDER TRAVESAL OF A TREE :"<<endl;
   postorder(root);
   cout<<"\n";
   cout<<"PREORDER TRAVESAL OF A TREE :"<<endl;
   preorder(root);
    cout<<"\n";
return 0;
}