#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

int main () {
    Node *first = new Node {10, nullptr, nullptr};
    Node *second = new Node {20, first, nullptr};

    first->next = second;

    cout << second->prev->data;
}