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
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* Reverse(node* head)
{
    node* previous=nullptr;
    node* current=head;
    node* next=nullptr;
    while(current!=nullptr)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }

    return previous;
}

int main() {
      node*head=nullptr;
      InsertAtTail(head,1);
      InsertAtTail(head,2);
      InsertAtTail(head,3);
      InsertAtTail(head,4);
      InsertAtTail(head,5);

      Display(head);
      node* newhead=Reverse(head);
      Display(newhead);
      Display(head);
    return 0;
}