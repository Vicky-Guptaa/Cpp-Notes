#include <iostream>
#include<cmath>
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
void insertAtTail(node *&head, int val)
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

void Display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *RReverseK(node *head, int k)
{
    node *previous = nullptr, *current = head, *next;

    int count = 0;
    while (current!= nullptr && count < k)
    {
        count++;
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    if (current != nullptr)
    {
        head->next = RReverseK(current, k);
    }
    return previous;
}

int main()
{
    node *head = nullptr;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    Display(head);
    node *newHead = RReverseK(head, 3);
    Display(newHead);

    return 0;
}