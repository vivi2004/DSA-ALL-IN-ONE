#include<iostream>
using namespace std;
//   creation of the node ...
struct  Node
{
    int data;
    Node* next;

};

    void insetAtEnd(Node* head, int newData){
         Node * newNode = new Node();
         newNode->data = newData;
         newNode->next = nullptr;

         if(head == nullptr) {
            head = newNode;
            return;
         }
         Node*temp = head;
         while(temp->next != nullptr) {
            temp = temp->next;
         }
         temp->next = newNode;
    } 

// //    Function to insert a node after a given positin ...
// void insertAtPosition(Node* head , int position, int newData){
//      if(position <1 ) {
//          cout<< "It should be greater than 1"<< endl;
//          return;
//      }

//       Node* newNode = new Node ();
//       newNode->data = newData;
//       head = newNode;
//       return;


//       if(position == 1){
//         newNode->next = head;
//         head = newNode;
//         return;
//       }
      
//    Node* temp = head;

//    // Traverse the node ...
//    for(int i = 1; temp != nullptr && i<position -1; i++) {
//     temp = temp->next;
//    }
//    if(temp == nullptr) {
//      cout<< "Position is out of bounds" << endl;
//      return;
//    }
//      newNode->next = temp->next;
//      temp->next = newNode;
// }
 

//   Another better approach for  the insertion of the element at  k th postion ..




//  function to print the  linked list
 void printlist(Node* node) {
     while( node != nullptr) {
        cout<< node->data << "-> " ;
        node = node->next;

     }
     cout<< "nullptr" << endl;
 }

int main( ) {

    Node* head = nullptr;
    insetAtEnd(head,10);
    insetAtEnd(head,20);
    insetAtEnd(head,30);


    cout<<  "linkedList after inserting  at the end " ;
    printlist(head);
    return 0;
 }

 
 /*
 for creating a new node for inserting an element  into the list...
  Node* insertAtEnd(Node* head, int x) {
       Node* newNode = new Node(x);

       // check if the linked list is empty ...
       if(head == nullptr) {
        head =newNode;
        return head;

        //  Traversed  to the end of the linked list  
        Node * temp = head;   
        while(temp->next  != nullptr) {
          temp = temp->next;
          }
          // Return the head of the linked list... 
          return head;
        }
    }

 */