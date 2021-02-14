#include<iostream>
using namespace std;

struct node
{
    int Data;
    node*next;
    node (int value)
    {
        Data=value;
        next=NULL;
    }
};

void Display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->Data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}

void Insert_At_Tail(node* &head,int value)
{
    node*n=new node(value);
    if(head==NULL)
    {
        head=n;
        return;
    }
     node*temp=head;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=n;
}
void Insert_At_Head(node* &head,int value)
{
    node*n=new node(value);
    n->next=head;
    head=n;
}

int main() {
    node *head=NULL;
    Insert_At_Tail(head,1);
    Insert_At_Tail(head,2);
    Insert_At_Tail(head,3);
    Insert_At_Tail(head,4);
    Insert_At_Head(head,0);
    // Display(head);
    cout<<head<<endl;
    cout<<head->next<<endl;
    cout<<head->next->next<<endl;
    cout<<head->next->next->next<<endl;
    

    return 0;
}