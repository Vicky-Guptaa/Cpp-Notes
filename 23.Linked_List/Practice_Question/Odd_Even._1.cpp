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
    while(pos>1)
    {
        pos--;
        temp=temp->next;
    }
    ListNode*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
ListNode* Odd_Even(ListNode* head)
{
    ListNode*temp=head;
    ListNode*Odd=nullptr,*Even=nullptr;
    int count=1;
    while(temp!=nullptr)
    {
        if(count%2==0)
        {
            InsertAtTail(Even,temp->data);
        }
        else
        {
            InsertAtTail(Odd,temp->data);
        }
        temp=temp->next;
        count++;
    }
    ListNode*newHead=Odd;
    while(Odd->next!=nullptr)
    {
        Odd=Odd->next;
    }
    Odd->next=Even;
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

    Display(head);
    ListNode* newHead=Odd_Even(head);
    Display(newHead);
    return 0;
}