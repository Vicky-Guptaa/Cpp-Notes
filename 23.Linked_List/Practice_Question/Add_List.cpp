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
    ListNode*newHead=nullptr;
    int Q=0,sum;
    while(temp1!=nullptr&&temp2!=nullptr)
    {
        sum=temp1->data+temp2->data+Q;
        Q=sum/10;
        InsertAtTail(newHead,sum%10);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=nullptr)
    {
        sum=temp1->data+Q;
        Q=sum/10;
        InsertAtTail(newHead,sum%10);
        temp1=temp1->next;
    }
    while(temp2!=nullptr)
    {
        sum=temp2->data+Q;
        Q=sum/10;
        InsertAtTail(newHead,sum%10);
        temp2=temp2->next;
    }
    if(Q!=0)
    {
        InsertAtTail(newHead,Q);
    }
    return newHead;
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