#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
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
        head->next=head;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void InsertAtHead(node*&head,int val)
{
    node*n=new node(val);
    if(head==nullptr)
    {
        head=n;
        head->next=head;
    }
    n->next=head;
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    head=n;
}
void Display(node* head)
{
    node *temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<"Null"<<endl;
}

void DeleteAtHead(node*&head)
{
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node*todelete=head;
    head=head->next;
    temp->next=head;
    delete todelete;
}

void Deletion(node*&head,int pos)
{
    if(pos==1)
    {
        DeleteAtHead(head);
        return;
    }
    node*temp=head;
    while(pos>1)
    {
        pos--;
        temp=temp->next;
    }
    node* todelete=temp->next;
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
    InsertAtTail(head,6);
    InsertAtTail(head,7);

    Display(head);
    InsertAtTail(head,8);
    InsertAtHead(head,0);
    Display(head);

    Deletion(head,1);

    Display(head);
    return 0;
}