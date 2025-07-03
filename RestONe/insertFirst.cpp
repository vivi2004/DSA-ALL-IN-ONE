#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertNodeAtBegining(Node *&head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void printNode(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data; // Print the current node's data
        if (node->next != nullptr)
            cout << " -> "; // Add formatting for readability
        node = node->next;  // Move to the next node
    }
    cout << " -> nullptr" << endl; // End with nullptr
}

int main()
{
    Node *head = nullptr;
    insertNodeAtBegining(head, 10);
    insertNodeAtBegining(head, 20);
    insertNodeAtBegining(head, 0);

    cout << "LinkedList after inserting at the beginning: ";
    printNode(head);

    return 0;
}
