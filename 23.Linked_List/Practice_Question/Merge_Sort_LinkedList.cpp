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

ListNode* Merge_Sort(ListNode* &head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    ListNode*fast=head->next,*slow=head;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    fast=slow->next;
    slow->next=nullptr;

    return Merge(Merge_Sort(head),Merge_Sort(fast));
}

int main() {
    ListNode* head=nullptr;
    InsertAtTail(head,91);
    InsertAtTail(head,8);
    InsertAtTail(head,7);
    InsertAtTail(head,5);
    InsertAtTail(head,4);
    InsertAtTail(head,0);
    InsertAtTail(head,1);

    Display(head);

    ListNode*newHead=Merge_Sort(head);

    Display(newHead);
    return 0;
}