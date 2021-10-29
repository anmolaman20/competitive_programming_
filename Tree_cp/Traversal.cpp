#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left,*right;
    TreeNode()
    {
         left = NULL;
         right = NULL;
    }
};
TreeNode* create()
{
    int x;
    TreeNode* newnode;
    newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    cout<<"Enter Data (-1 for No Data *_*)"<<" ";
    cin>>x;
    if(x==-1) return 0;
    newnode->val = x;
    cout<<"Enter left child of "<<x<<endl;
    newnode->left = create();
    cout<<"Enter Right child of "<<x<<endl;
    newnode->right = create();
    return newnode;
}
void preorder_Recursive(TreeNode *root)
{
   if(root==NULL)  return;
   cout<<root->val<<" ";
   preorder_Recursive(root->left);
   preorder_Recursive(root->right);
}
void postorder_Recursive(TreeNode *root)
{
   if(root==NULL)  return;
   postorder_Recursive(root->left);
   postorder_Recursive(root->right);
   cout<<root->val<<" ";
}
void inorder_Recursive(TreeNode *root)
{
   if(root==NULL)  return;
   inorder_Recursive(root->left);
   cout<<root->val<<" ";
   inorder_Recursive(root->right);
}
void inorder_Iterative(TreeNode *root)
{
   stack<TreeNode*>st;
   TreeNode *curr = root;
   while(curr!=NULL || !st.empty())
   {
       if(curr!=NULL)
       {
           st.push(curr);
           curr = curr->left;
       }
       else{
           curr = st.top();
           st.pop();
           cout<<curr->val<<" ";
           curr = curr->right;
       }
   }
}
void preorder_Iterative(TreeNode *root)
{
   stack<TreeNode*>st;
   st.push(root);
   TreeNode *curr = NULL;
   while(!st.empty())
   {
       curr = st.top();
       cout<<curr->val<<" ";
       st.pop();
       if(curr->right!=NULL)
       {
           st.push(curr->right);
       }
       if(curr->left!=NULL)
       {
           st.push(curr->left);
       }
   }
}
void postorder_Iterative_using_1_Stack(TreeNode *root)
{
   stack<TreeNode*>st;
   TreeNode *curr = root;
   TreeNode *prev = NULL;
   while(curr!=NULL || !st.empty())
   {
       if(curr!=NULL)
       {
           st.push(curr);
           curr = curr->left;
       }
       else
       {
           curr = st.top();
           if(curr->right == NULL || curr->right == prev)
           {
               cout<<curr->val<<" ";
               st.pop();
               prev = curr;
               curr = NULL;
           }
           else
           {
               curr = curr->right;
           }
       }
   } 
}
void postorder_Iterative_using_2_stack(TreeNode *root)
{
   stack<TreeNode*>st1;
   stack<TreeNode*>st2;
   st1.push(root);
   TreeNode *curr = NULL;
   while(!st1.empty())
   {
       curr = st1.top();
       st1.pop();
       st2.push(curr);
       if(curr->left!=NULL)
           st1.push(curr->left);
       if(curr->right!=NULL)
           st1.push(curr->right);
   }
   while(!st2.empty())
   {
       curr = st2.top();
       cout<<curr->val<<" ";
       st2.pop();
   }
}
int main()
{
  TreeNode* root;
  root = create();
  cout<<"Inorder Traversal using Recursion :"<<endl;
  inorder_Recursive(root);cout<<endl;

  cout<<"Preorder Traversal using Recursion :"<<endl;
  preorder_Recursive(root);cout<<endl;

  cout<<"Postorder Traversal using Recursion :"<<endl;
  postorder_Recursive(root);cout<<endl;

  cout<<"Inorder Traversal using Iteration :"<<endl;
  inorder_Iterative(root);cout<<endl;

  cout<<"Preorder Traversal using Iteration :"<<endl;
  preorder_Iterative(root);cout<<endl;

  cout<<"Postorder Traversal using Iteration with 2 stack :"<<endl;
  postorder_Iterative_using_2_stack(root);cout<<endl;

  cout<<"Postorder Traversal using Iteration with 1 stack :"<<endl;
  postorder_Iterative_using_1_Stack(root);cout<<endl;
return 0;
}