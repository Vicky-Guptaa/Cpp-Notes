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
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(node* head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* ReverseKth(node* head,int k)
{   
    node* current=head;
    int n=0;
    while(current)
    {
        n++;
        current=current->next;
    }
    node *previous=nullptr,*next=nullptr,*newHead=nullptr;
    node *Tail_1=nullptr,*Tail_2=head;
    current=head;
    while(n>=k)

    {      
        int count=0;
        while(count<k)
        {
            count++;
            next=current->next;
            current->next=previous;
            previous=current;
            current=next;
        }
        if(!newHead) newHead=previous;
        if(Tail_1) Tail_1->next=previous;
        Tail_2->next=current;
        Tail_1=Tail_2;
        Tail_2=current;
        previous=nullptr;
        n-=k;
    }
    
    return newHead;
    
}

int main() {
    node* head=nullptr;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    
    Display(head);
    node* newHead=ReverseKth(head,4);
    Display(newHead);

    return 0;
}