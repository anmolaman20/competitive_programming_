#include <bits/stdc++.h>
using namespace std;
// 1 2 3 4 5 6 7 
//o/p = 4
//in case of even return second;
// 1 2 3 4 5 6 7 8
//o/p  =  5
class node
{
public:
    int data;
    node* next;
    node(int value)
    { 
        data = value;
        next = NULL;
    }
};
void middle_element(node* head)
{
    cout<<"\n";
    node* t1 = head;
    node* t2 = head;
    while(t1!=NULL && t2!=NULL )
    {
        t1 = t1->next;
        t2 = t2->next->next;
    }
    cout<<"\nMiddle Element is : "<<t1->data<<" "<<endl;
}
void display(node* temp)
{
    cout<<"\tElements of Linked List :\n\n";
    if(temp == NULL) return;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    node* head = NULL;

    node* n1 = new node(1);
    head = n1;

    node* n2 = new node(2);
    n1->next = n2;

    node* n3 = new node(3);
    n2->next = n3;

    node* n4 = new node(4);
    n3->next = n4;

    node* n5 = new node(5);
    n4->next = n5;

    node* n6 = new node(6);
    n5->next = n6;

    node* n7 = new node(7);
    n6->next = n7;
    display(head);

    middle_element(head);


return 0;
}