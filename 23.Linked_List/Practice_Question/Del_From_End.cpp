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
    int n=0;
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        n++;
        temp=temp->next;
    }
    n=n-k;
    if(n==0)
    {
        temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    else
    {
        temp=head;
        while(n>1)
        {
            n--;
            temp=temp->next;
        }
        ListNode* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
        return head;
    }
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
    ListNode* newHead=Delete_Last(head,7);
    Display(newHead);
    return 0;
}