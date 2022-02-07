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

ListNode*top=nullptr;

void Push(int val)
{
    ListNode*temp=new ListNode(val);
    temp->next=top;
    top=temp;
} 

void Pop()
{
    if(top==nullptr)
    {
        cout<<"No Element In Stack"<<endl;
        return;
    }
    ListNode* todelete=top;
    top=top->next;
    delete todelete;
}

void Top()
{
    if(top==nullptr)
    {
        cout<<"No Element In Stack"<<endl;
        return;
    }
    cout<<top->data<<endl;
}

bool Empty()
{
    return(top==nullptr)?true:false;
}

void Display()
{
    if(top==nullptr)
    {
        cout<<"No Element In Stack"<<endl;
        return;
    }
    ListNode*temp=top;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    cout<<Empty();
    Display();
    Push(1);
    Top();
    Push(2);
    Push(3);
    Push(4);
    Push(5);
    Display();
    Pop();
    Display();
    cout<<Empty();

    return 0;
}