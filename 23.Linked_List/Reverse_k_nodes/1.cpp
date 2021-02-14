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

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
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
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void Reverse(node* &head)
{
    if(head==nullptr||head->next==0)
    {
        return;
    }
    node*curent=head;
    node*previous=nullptr;
    node*next=nullptr;
    while(curent!=nullptr)
    {
        next=curent->next;
        curent->next=previous;
        previous=curent;
        curent=next;
    }
    head=previous;
}

node* RecursiveReverse(node* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    node* Rlist=RecursiveReverse(head->next);
    head->next->next=head;
    head->next=nullptr;
    return Rlist;
}
int main() {
    node*head=nullptr;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    Display(head);
    Reverse(head);
    Display(head);
    node* nhead=RecursiveReverse(head);
    Display(nhead);
    Display(head);
    return 0;
}