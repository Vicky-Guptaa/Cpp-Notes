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

bool Detect_Circle_Linked(node* head)
{
    node*fast=head,*slow=head;
    while(fast->next!=nullptr)
    {
        if(fast==slow)
        {
            return true;
        }
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
}

int main() {
    node*head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    Display(head);
    
    Circle_Linked(head,3);
    // Display(head);
    (Detect_Circle_Linked(head))?cout<<"Circle Linked":cout<<"Not A Circle Linked";
    return 0;
}