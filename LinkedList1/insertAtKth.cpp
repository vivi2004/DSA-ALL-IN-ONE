#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtHead(Node *&head)
{
    Node *newNode = new Node();
    newNode->next = head;
    head = newNode;
}

void insertAtKth(Node *&head, int el, int k)
{
    Node *newNode = new Node();
    newNode->data = el;
    if (k == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node *temp = head;

    int count = 1;
    while (temp != nullptr && count < k - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr)
    {
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteHead(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void deleteTail(Node *&head)
{
    if (head == nullptr)
        return;
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    // Traverse to the second to last node....
    while (temp->next != nullptr && temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    Node *tailNode = temp->next;
    temp->next = nullptr;
    delete tailNode
}

void deleteAtKth(Node *head, int k)
{
    if (head == nullptr)
    {
        return;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    Node *temp = head;
    int count = 1;
    while (temp != nullptr && count < k - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        return;
    }
    // Delete the k th node.,,
    Node *nodeDelete = temp->next;
    temp->next = nodeDelete;
    delete nodeDelete;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
int main()
{
    Node *head = nullptr;

    // Insert elements at the head
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    cout << "Original list: ";
    printList(head);

    // Delete at various positions
    cout << "Deleting node at position 2..." << endl;
    deleteAtKth(head, 2);
    printList(head);

    cout << "Deleting node at position 1..." << endl;
    deleteAtKth(head, 1);
    printList(head);

    cout << "Deleting node at position 5 (out of bounds)..." << endl;
    deleteAtKth(head, 5);
    printList(head);

    cout << "Deleting node at position 2..." << endl;
    deleteAtKth(head, 2);
    printList(head);

    return 0;
}