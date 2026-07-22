// Step 1: define node
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Step 2: Insert at End
Node *insert(Node *head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    Node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

    return head;
}

// Step 3: Display List
void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Step 4: Main Function
int main()
{
    Node *head = NULL;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);

    display(head);

    return 0;
}