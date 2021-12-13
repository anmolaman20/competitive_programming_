#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
        int data;
        node* next;
        node(int v)
        {
            data = v;
            next = NULL;
        }
};
void insertAtTail(node* &head,int data)
{
    node *n = new node(data);
    if(head==NULL)
    {
        head = n;
        return;
    }
    else 
    {
        node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}
void insertAtBegining(node* &head,int data)
{
    node* n = new node(data);
    if(head==NULL)
        head = n ;
    else
    {
       n->next = head;
       head = n; 
    }
       
}
void insertAtpos(node* &head,int data,int pos)
{
    node* n = new node(data);
     node* temp = head;
     for(int i=0;i<pos - 1;i++)
     {
          temp = temp->next;
     }
     n->next = temp->next;
     temp->next = n;
}
void display(node* head)
{
    if(head==NULL)
       cout<<"Linked List is Empty : \n";
    else 
    {
        while(head!=NULL)
        {
            cout<<head->data<<"->";
            head = head->next;
        }
        cout<<"NULL\n";
    }
}
int main()
{
   node *head = NULL;
   insertAtTail(head,1);  //1
   insertAtTail(head,2);  // 1 2
   insertAtBegining(head,7);// 7 1 2
   insertAtBegining(head,9); //9 7 1 2
   insertAtTail(head,3); //9 7 1 2 3
   insertAtpos(head,5,3);//9 7 5 1 2 3
   display(head);   
return 0;
}