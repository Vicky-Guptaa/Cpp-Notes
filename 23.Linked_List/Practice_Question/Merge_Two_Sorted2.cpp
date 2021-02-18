#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode*next;
    ListNode(int val)
    {
        data=val;
        next=nullptr;
    }
};

void InsertAtTail(ListNode* &head,int val)
{
    ListNode* n=new ListNode(val);
    if(head==nullptr)
    {
        head=n;
        return;
    }
    ListNode*temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }    
    temp->next=n;
}

void Display(ListNode* head)
{
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

ListNode* Merge(ListNode*Head,ListNode*Tail)
{

    ListNode*t1=nullptr,*t2=nullptr,*n=new ListNode(0);
    if(Head->data>Tail->data)
    {
        n->next=Tail;
        t1=n;
        t2=Head;
    }
    else
    {
        n->next=Head;
        t1=n;
        t2=Tail;
    }
    while(t1->next!=nullptr&&t2!=nullptr)
    {
        if(t1->next->data>t2->data)
        {
            ListNode*temp=t1->next;
            t1->next=t2;
            t2=temp;
        }
        else
        {
            t1=t1->next;
        }
    }
    if(t2!=nullptr)
    {
        t1->next=t2;
    }
    return n->next;
}

int main() {
    ListNode*head1=nullptr,*head2=nullptr;

    InsertAtTail(head1,5);
    InsertAtTail(head1,7);
    InsertAtTail(head1,19);
    InsertAtTail(head1,51);
    InsertAtTail(head1,52);
    
    InsertAtTail(head2,0);
    InsertAtTail(head2,3);
    InsertAtTail(head2,14);
    InsertAtTail(head2,55);
    
    Display(head1);
    Display(head2);
    
    ListNode*newHead=Merge(head1,head2);

    Display(newHead);
    return 0;
}