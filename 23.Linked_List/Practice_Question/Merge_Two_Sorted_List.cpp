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

ListNode* Merge(ListNode*head1,ListNode*head2)
{
    ListNode*temp1=head1;
    ListNode*temp2=head2;
    ListNode*Combine=new ListNode(0);
    ListNode*temp3=Combine;

    while(temp1!=nullptr&&temp2!=nullptr)
    {
        if(temp1->data>temp2->data)
        {
            temp3->next=temp2;
            temp3=temp3->next;
            temp2=temp2->next;
        }
        else
        {
            temp3->next=temp1;
            temp3=temp3->next;
            temp1=temp1->next;    
        }
    }
    while(temp1!=nullptr)
    {
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }
    while(temp2!=nullptr)
    {
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
    return Combine->next;
}

int main() {
    ListNode*head1=nullptr;
    ListNode*head2=nullptr;

    InsertAtTail(head1,1);
    InsertAtTail(head1,9);
    InsertAtTail(head1,15);
    InsertAtTail(head1,20);

    InsertAtTail(head2,-1);
    InsertAtTail(head2,0);
    InsertAtTail(head2,2);
    InsertAtTail(head2,21);

    Display(head1);
    Display(head2);

    ListNode*newHead=Merge(head1,head2);

    Display(newHead);
    return 0;
}