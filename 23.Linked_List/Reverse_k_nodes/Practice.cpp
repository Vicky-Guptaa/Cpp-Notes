#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == nullptr)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void Display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;
}
void DeleteNode(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
node *Reverse(node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }

    node *current = head;
    node *previous = nullptr;
    node *next = nullptr;
    while (current != nullptr)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    return previous;
}

node *RReverse(node *head)
{
    if (head->next == nullptr || head == nullptr)
    {
        return head;
    }
    node *newhead = RReverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead;
}

node *ReverseKth(node *head, int k)
{
    node *current = head;
    int n=0;
    while (current != nullptr)
    {
        n++;
        current = current->next;
    }
    node *previous = nullptr, *next = nullptr, *newHead = nullptr;
    node *Tail_1 = nullptr, *Tail_2 = head;
    current = head;
    while (n >= k)
    {
        int count = 0;
        while (count < k)
        {
            count++;
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        if (!newHead)
        {
            newHead = previous;
        }
        if (Tail_1)
        {
            Tail_1->next = previous;
        }
        Tail_2->next = current;
        Tail_1 = Tail_2;
        Tail_2 = current;
        previous = nullptr;
        n -= k;
    }
    return newHead;
}

node* RReverseKth(node* head,int k)
{

    node*previous=nullptr,*current=head,*next=nullptr;
    int count=0;
    while(current!=nullptr&&count<k)
    {
        count++;
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    if(current!=nullptr)
    {
        head->next=RReverseKth(current,k);
    }
    return previous;

}
int main()
{
    node *head = nullptr;
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    InsertAtTail(head, 7);
    InsertAtHead(head, 1);
    Display(head);
    DeleteNode(head, 7);
    Display(head);
    node *newHead = Reverse(head);
    Display(newHead);
    head = RReverse(newHead);
    Display(head);
    newHead = ReverseKth(head, 2);
    Display(newHead);
    head=RReverseKth(newHead,2);
    Display(head);
    return 0;
}