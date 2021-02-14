#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
    node(int val)
    {
        data=val;
        next=nullptr;
    }
};

void InsertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==nullptr)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(node* head)
{
    node*temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* Reverse(node* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    node* newhead=Reverse(head->next);
    head->next->next=head;
    head->next=nullptr;
    return newhead;
}
int main() {
    node*head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);

    Display(head);
    node* newnode=Reverse(head);
    Display(newnode);
    Display(head);
    return 0;
}