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

ListNode* Reverse(ListNode* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    ListNode*prev=nullptr,*curr=head,*next=nullptr;
    while(curr!=nullptr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    
    return prev;
}
bool Pallindrome(ListNode* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return true;
    }
    ListNode* slow=head,*fast=head;
    while(fast->next!=nullptr&&fast->next->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=Reverse(slow->next);
    slow=slow->next;
    
    fast=head;
    while(slow!=nullptr)
    {
        if(slow->data!=fast->data)
        {
            return false;
        }
        slow=slow->next;
        fast=fast->next;
    }
    return true;
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
    (Pallindrome(head))?cout<<"Pallindrome"<<endl:cout<<"Not A Pallindrome"<<endl;
    return 0;
}

    