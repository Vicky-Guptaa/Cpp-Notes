#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
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
    ListNode* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(ListNode*head)
{
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void Swap(ListNode*head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    ListNode*curr=head,*prev=nullptr,*next=nullptr;
    int count;
    while(curr!=nullptr)
    {
        count=2;
        while(count>0&&curr!=nullptr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr<next;
        }
    }
}

int main() {
    ListNode*head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    Display(head);
    return 0;
}