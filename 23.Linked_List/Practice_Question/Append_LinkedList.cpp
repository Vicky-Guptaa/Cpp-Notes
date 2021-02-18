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

ListNode* Append(ListNode*head,int k)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    ListNode*fast=head,*slow=head;
    while(k>0)
    {
        k--;
        fast=fast->next;
    }
    while(fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=head;
    ListNode*newHead=slow->next;
    slow->next=nullptr;
    return newHead;
}
int main() {
    ListNode*head=nullptr;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    InsertAtTail(head,8);

    Display(head);

    ListNode*newHead=Append(head,3);

    Display(newHead);
    return 0;
}