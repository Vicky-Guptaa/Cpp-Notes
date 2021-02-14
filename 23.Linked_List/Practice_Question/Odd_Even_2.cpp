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

ListNode* oddEvenList(ListNode* &head)
{
    if(head==nullptr||head->next==nullptr||head->next->next==nullptr)
    {
        return head;
    }
    ListNode*even=head->next;
    ListNode*odd=head;
    ListNode*even_start=even;
    bool chk;
    do
    {
      odd->next=even->next;
      odd=odd->next;
      even->next=odd->next;
      even=even->next;
      (even==nullptr)?chk=true:chk=false;
    }
    while(even!=nullptr&&odd!=nullptr);

    if(chk)
    {
        odd->next=even_start;
    }
    else
    {
        even->next=nullptr;
        odd->next=even_start;
    }
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
    Display(head);
    ListNode* newHead=oddEvenList(head);
    Display(newHead);
    return 0;
}