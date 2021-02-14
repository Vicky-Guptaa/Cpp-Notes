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
    node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void Circle_Linked(node* head,int val)
{
    node*temp=head,*p=nullptr;
    while(temp->next!=nullptr)
    {
        if(temp->data==val)
        {
            p=temp;
        }
        temp=temp->next;
    }

    temp->next=p;
}

void Remove_Circle_Linked(node*head)
{
    node*fast=head,*slow=head;
    while(fast->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        {
            break;
        }
    }
    fast=head;
    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=nullptr;

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

    Circle_Linked(head,5);

    Remove_Circle_Linked(head);
    Display(head);

    
    return 0;
}