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

ListNode* Add(ListNode*head1,ListNode*head2)
{
    ListNode*temp1=head1,*temp2=head2;
    ListNode*dummy=new ListNode(0);
    ListNode*Follow=dummy;
    int carry=0;
    while(temp1!=nullptr||temp2!=nullptr||carry)
    {
        int sum=0;
        if(temp1!=nullptr)
        {
            sum+=temp1->data;
            temp1=temp1->next;
        }
        if(temp2!=nullptr)
        {
            sum+=temp2->data;
            temp2=temp2->next;
        }
        sum+=carry;
        ListNode*newHead=new ListNode(sum%10);
        carry=sum/10;
        Follow->next=newHead;
        Follow=Follow->next;
    }
  
    return dummy->next;
}

int main() {
    ListNode*head1=nullptr,*head2=nullptr;
    InsertAtTail(head1,8);
    InsertAtTail(head1,3);
    InsertAtTail(head1,6);
    InsertAtTail(head1,4);
    InsertAtTail(head2,1);
    InsertAtTail(head2,5);
    InsertAtTail(head2,6);
    InsertAtTail(head2,9);
    InsertAtTail(head2,6);
    InsertAtTail(head2,9);
    Display(head1);
    Display(head2);
    ListNode*newHead=Add(head1,head2);
    Display(newHead);
    return 0;
}