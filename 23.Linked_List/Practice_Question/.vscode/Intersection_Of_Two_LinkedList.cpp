#include<iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
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
    ListNode* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(ListNode*head)
{
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

int Length(ListNode*head)
{
    int l=0;
    ListNode*temp=head;
    while(temp->next!=nullptr)
    {
        l++;
        temp=temp->next;
    }
    return l;
}

bool Intersection(ListNode*H1,ListNode*H2)
{
    int L1=Length(H1);
    int L2=Length(H2);
    int k;
    (L1>=L2)?k=L1-L2:k=L2-L1;
    ListNode*t1=nullptr,*t2=nullptr;
    if(L1>L2)
    {
        t1=H1;
        t2=H2;
    }
    else
    {
        t1=H2;
        t2=H1;
    }

    while(k)
    {
        k--;
        t1=t1->next;
    }
    while(t1->next!=nullptr&&t2->next!=nullptr)
    {
        if(t1==t2)
        {
            return true;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return false;
}
int main() {
    ListNode* head1=nullptr,*head2=nullptr;
    InsertAtTail(head1,1);
    InsertAtTail(head1,2);
    InsertAtTail(head1,3);
    InsertAtTail(head1,4);
    InsertAtTail(head1,5);
    InsertAtTail(head1,6);
    InsertAtTail(head1,7);
    InsertAtTail(head1,8);

    InsertAtTail(head2,9);
    InsertAtTail(head2,10);
    head2->next->next=head1->next->next->next->next->next;
    
    Display(head1);
    Display(head2);
    
    (Intersection(head1,head2)!=0)?cout<<"There Is Intersecting Node"<<endl:cout<<"There Are No Intersection Node"<<endl;
    
    return 0;
}