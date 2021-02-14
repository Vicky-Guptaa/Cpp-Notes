#include<iostream>
using namespace std;

struct node
{
    node*prev;
    int data;
    node*next;
    node(int val)
    {
        prev=nullptr;
        data=val;
        next=nullptr;    
    }
};

void InsertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=nullptr)
    {
        head->prev=n;
    }
    head=n;
}

void InsertAtTail(node* &head,int val)
{
    if(head==nullptr)
    {
        InsertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node*temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void Display(node* head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void DeleteHead(node* &head)
{
    if(head==nullptr)
    {
        return;
    }
    
    node*temp=head;
    head=head->next;
    head->prev=nullptr;
    delete temp;
}

void Delete_Node(node* head,int pos)
{
    node*temp=head;
    while(temp!=nullptr&&pos>0)
    {
        pos--;
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=nullptr)
    {
        temp->next->prev=temp->prev;
    }
    delete temp;
}
int main() {
    node* head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    Display(head);
    Delete_Node(head,6);
    Display(head);
    DeleteHead(head);
    Display(head);
    
    return 0;
}