#include <iostream>
using namespace std;
// //   creation of the node ...
// struct Node
// {
//     int data;
//     Node *next;
// };

// // function to insert a node at the begining ..
// void insertAtBegining(Node *&head, int newData)
// {
//     Node *newNode = new Node();
//     newNode->data = newData;
//     newNode->next = head;
//     head = newNode;
// }

// //  function to print the  linked list
// void printlist(Node *node)
// {
//     while (node != nullptr)
//     {
//         cout << node->data << "-> ";
//         node = node->next;
//     }
//     cout << "nullptr" << endl;
// }

// int main()
// {
//     Node *head = nullptr;
//     insertAtBegining(head, 10);
//     insertAtBegining(head, 20);
//     insertAtBegining(head, 0);
//     cout << "linkedList after inserting  at the beginning ";
//     printlist(head);
//     return 0;
// }

struct Ndde
{
    int data;
    Node *next;
};

void insertAtBegining(Node *head, int newData)
{
    Node *newNode = new Node();
    newNode->data = new
}