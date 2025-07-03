#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBegining(Node *&head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int newData)
{
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
            temp->next = newNode;
        }
    }
}
void insertAtPosition(Node *head, int pos, int val)
{
    if (pos == 1)
    {
        insertAtBegining(head, val);
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (!temp)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        Node *newNode = new Node();
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteAtBegining(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
    }
    else
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}
void deleteAtPos(Node *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }
    if (pos == 1)
    {
        deleteAtBegining(head);
        return;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr)
        {
            cout << "Position out of bounds\n";
            return;
        }
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}
void printlist(Node *head)
{
    Node *cur = head;
    while (cur != nullptr)
    {
        cout << cur->data << " ->";
        cur = cur->next;
    }
    cout << "Null\n";
}
