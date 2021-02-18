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

ListNode* Delete_Last(ListNode*head,int k)
{
    if(head==nullptr||k==0)
    {
        return head;
    }

    ListNode*n=new ListNode(0);
    n->next=head;
    ListNode*fast=n,*slow=n;
    while(k>0)
    {
        fast=fast->next;
        k--;
    }
    while(fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next;
    }
    if(slow->next==head)
    {
        if(head->next==nullptr)
        {
            delete slow->next;
            head=nullptr;
            return head;
        }
        ListNode*todelete=head;
        head=head->next;
        delete todelete;
        return head;
    }
    ListNode*todelete=slow->next;
    slow->next=slow->next->next;
    delete todelete;
    delete n;
    return head;
}

int main() {
    ListNode*head=nullptr;
    InsertAtTail(head,0);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    Display(head);
    ListNode* newHead=Delete_Last(head,1);
    Display(newHead);
    return 0;
}