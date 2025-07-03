//   linkelist ......

#include<bits/stdc++.h>
using namespace std;
 struct  Node   // you can use  struct 
{
     public:
     int data;
     Node* next;
     public:
     Node ( int data1, Node* next1){
        data = data1;
        next = next1;
     }
    Node (int data1 ) {
         data = data1;
         next = nullptr;
    }
    
};

   Node * convertArr2ll(  vector<int>&arr) {
         Node * head = new Node(arr[0]);
        Node * mover = head;
        for ( int i = 1; i<arr.size();i++){
             Node * temp = new Node( arr[i]);
             mover->next = temp;
             mover = temp;
        }
         return head;

      }
        
        void print( Node * head) {
           while( head != NULL) {
            cout << head->data<< " ";
            head = head ->next;
           }
           cout<< endl;
        }   

        //    for removing the tailof the linkelist
         Node* removeTail( Node * head){
             if (  head == NULL ||  head->next == NULL) return NULL;
              Node * temp =  head;
              while ( head->next->next != NULL) {
                 temp = temp-> next;
              }
               delete( temp->next);
               temp->next =nullptr;
               return head;
         }

         Node * removeEl( Node* head , int k) {
              if (  head == NULL) return NULL;
                if( k == 1){
                    Node *temp = head;
                    head = head->next;
                   delete( temp);
                   return head;
                }
                int cnt= 0;
                Node* temp = head;
                Node * prev = NULL;
               while (  temp != NULL)
               {
                 cnt++;
                 if(cnt== k) {
                    prev->next = temp->next->next;
                    delete( temp);
                    break;
                 }
                 prev = temp;
                 temp = temp->next;
               }
            return head; 
         }


        /// That's the how we remove the  head  from the linkelist...
       Node * removeHead(  Node * head){
         if ( head == NULL) return  head; 
          Node * temp = head;
          head =  head-> next;
          delete( temp);
          return head;
      }

int main () {
    vector<int> arr ={ 54,5,7,9,6};
     Node *y = new Node( arr[1], nullptr);
    Node * head = convertArr2ll(arr);
     cout<< head->data <<endl;
        // head = removeHead( head);
        // cout<< head->data<< endl;
        // print(head);
        // head = removeTail(head);
        // print( head);
        head =  removeEl(head,1);
        print( head);


    //   cout<< y;

}