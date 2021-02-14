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
    node*n=new node(val);
    if(head==nullptr)
    {
        head=n;
        return;
    }
    node*temp=head;
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

void DeleteHead(node* &head)
{
    node* temp=head;
    head=temp->next;
    delete temp;
}

void DeleteNode(node* &head,int val)
{
    if(head==nullptr)
    {
        return;
    }
    if(head->next==nullptr)
    {
        DeleteHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main() {
    node* head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    Display(head);
    // DeleteHead(head);
    DeleteNode(head,5);
    Display(head);
   
    return 0;
}