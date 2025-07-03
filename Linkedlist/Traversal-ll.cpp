#include<iostream>
using   namespace std;
//A linked list Node ... 

 class  Node {
 public:
  int data; 
  Node*next;

 // constructor  to initialize  a new node with data .
  Node(int new_data) {
    this->data = new_data;
    this->next = nullptr;

  }
     }; 
   // Functions to traverse and print the singly linked list ..
  void  traverseList(Node *head) {

    //A loop that  runs till the head is nullPtr.
    while(head != nullptr) {
         // print the data of the current node.
         cout<<head->data<< " ";
        //   Moving to the nex node
        head =  head->next;

    }
     cout<< endl;
   }

// Driver code 
  int main () {
    // create a  hard code for linked list
    // Node* head = new Node(10);
    // head->next = new Node (20);
    //  head->next->next = new Node (30);
    //   head->next->next->next = new Node (40); 
    //    // Example of traversing the node and printing ..
    //   traverseList(head);
  


      //  For the user input wala parts ....
        Node* head = nullptr;
        Node* tail = nullptr;
        int n;
        cout<< "Enter the number of node:";
        cin>> n;
        for(int i = 0; i< n; i++) {
            int value;
            cout<< "Enter value for node" << (i+1)<< ":";
            Node* newNode = new Node(value);
         if(head == nullptr) {
             head = newNode;
             tail  = newNode;
         }   else{
             tail->next = newNode;
             tail = newNode;
         }
        }
        cout<< "The linked list is: ";
        traverseList(head);
        
      return 0; 
  }


