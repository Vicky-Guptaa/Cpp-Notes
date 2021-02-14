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

void InsertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
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
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void Delete(node* head,int pos)
{
    node* temp=head;
    while(pos>1)
    {
        pos--;
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* Reverse(node*head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head; 
    }
    node*curr=head;
    node*prev=nullptr;
    node*next=nullptr;

    while(curr!=nullptr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

node* RReverse(node*head)
{
    if(head->next==nullptr||head==nullptr)
    {
        return head;
    }
    node* newHead=RReverse(head->next);
    head->next->next=head;
    head->next=nullptr;
    return newHead;
}

int main() {
    node* head=nullptr;
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    InsertAtTail(head,8);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    Display(head);
    Delete(head,2);
    Display(head);
    node* newHead=Reverse(head);
    Display(newHead);
    head=RReverse(newHead);
    Display(head);
   
    return 0;
}