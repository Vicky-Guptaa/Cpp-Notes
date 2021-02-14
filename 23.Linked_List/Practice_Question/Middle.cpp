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

ListNode* Middle(ListNode*head)
{
    ListNode*temp=head;
    int n=0;
    while(temp->next!=nullptr)
    {
        n++;
        temp=temp->next;
    }
    (n%2==0)?n=n/2:n=(n+1)/2;
    temp=head;
    while(n)
    {
        n--;
        // ListNode*todelete=temp;
        temp=temp->next;
        // delete temp;
    }
    head=temp;
    return head;
}
int main() {
    ListNode* head=nullptr;
    InsertAtTail(head,0);
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    InsertAtTail(head,6);
    InsertAtTail(head,7);
    Display(head);
    ListNode* newHead=Middle(head);
    Display(newHead);
    return 0;
}