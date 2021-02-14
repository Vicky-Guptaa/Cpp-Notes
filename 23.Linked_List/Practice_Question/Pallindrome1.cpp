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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void DeleteNode(ListNode* head,int pos)
{
    ListNode*temp=head;
    while(temp!=nullptr&&pos>1)
    {
        pos--;
        temp=temp->next;
    }
    ListNode*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

bool Pallindrome(ListNode*head)
{
    ListNode*temp=head;
    int n=0;
    while(temp->next!=nullptr)
    {
        n++;
        temp=temp->next;
    }
    n=(n+1)/2;
    temp=head;
    while(n>1)
    {
        n--;
        temp=temp->next;
    }
    ListNode*curr=temp->next,*next=nullptr,*prev=nullptr;

    while(curr!=nullptr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    temp->next=prev;
   temp=head;
    while(prev!=nullptr)
    {
        if(temp->data!=prev->data)
        {
             return 0;
        }
        temp=temp->next;
        prev=prev->next;
    }
    return 1;
}
int main() {
    ListNode* head=nullptr;
    InsertAtTail(head,0);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,3);
    InsertAtTail(head,2);
    InsertAtTail(head,1);
    InsertAtTail(head,0);
    Display(head);
    (Pallindrome(head))?cout<<"Pallindrome":cout<<"Not A Pallindrome";
    return 0;
}