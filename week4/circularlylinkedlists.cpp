#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *first = new Node{1, nullptr};
    Node *second = new Node{2, nullptr};

    first->next = second;
    second->next = first;

    cout << first->next->data;
    cout << second->next->data;

    return 0;
}
