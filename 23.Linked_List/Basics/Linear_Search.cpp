#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void InsertAtTail(node* &head,int val)
{
    node*n=new node(val);
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

void Display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool Search(node* head,int Key)
{
    node*temp=head;
    bool chk=false;
    while(temp!=NULL)
    {
        if(temp->data==Key)
        {
            chk=true;
            return chk;
        }
        temp=temp->next;
    }
    return chk;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    node*head=nullptr;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        InsertAtTail(head,arr[i]);
    }
    // Display(head);

    int key;
    cin>>key;
    (Search(head,key))?cout<<"Founded ! \n":cout<<"Not Founded ! \n";
    return 0;
}