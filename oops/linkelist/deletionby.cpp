//  deletion by the  value  ..

#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

   Node * convertArr2ll(  vector<int>&arr) {
    if ( arr.empty()) return nullptr;
         Node * head = new Node(arr[0]);
        Node * mover = head;
        for ( int i = 1; i<arr.size();i++){
             Node * temp = new Node( arr[i]);
             mover->next = temp;
             mover = temp;
        }
         return head;

      }

void print(Node* head) { 
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeEl(Node* head, int el) {
    if (head == NULL)  return  head;
    if (head->data == el) {
        Node* temp = head;
        head = head->next;
        delete ( temp);
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL) {
        if (temp->data == el) {
            prev->next = temp->next;
            delete (temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

  Node* insertNode( Node* head, int val){
     Node * temp = new Node(val, head);
     return temp; 
  }
   Node *insertTail( Node* head, int val){
     if( head == NULL){
        return new Node( val);
     }
     Node* temp = head;
     while(temp-> next != NULL ){
        temp = temp->next;
     }
      Node * newNode = new Node( val);
      temp->next= newNode; 
      return head;
   }
   Node *insertK( Node* head, int el,  int k) {
     if ( head == NULL) {
        if ( k==1)
          return new Node(el);
      }
       if ( k== 1) {
        Node*temp =  new Node ( el, head);
         return temp;   
    }

        int cnt =0;
        Node* temp = head;
        while( temp != NULL) {
            cnt ++;
        
        if( cnt == k-1){
            Node* x = new Node( el);
            x->next = temp-> next;
            temp->next = x;
            break; 
        }
        temp = temp->next;
          
          
        }
       return head;
   }
    
int main() {
    vector<int> arr = {54, 5, 7, 9, 6};
    Node* head = convertArr2ll(arr);
    // head = removeEl(head, 6 );
    // head = insertNode( head, 88);
    // head = insertTail(head,90);
    head = insertK( head, 34,3);
    print(head);
    return 0;
}
