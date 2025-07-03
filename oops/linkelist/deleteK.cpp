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

Node* removeEl(Node* head, int k) {
    if (head == nullptr) return nullptr;
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int cnt = 1;
    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr) {
        if (cnt == k) {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    return head;
}

int main() {
    vector<int> arr = {54, 5, 7, 9, 6};
    Node* head = convertArr2ll(arr);
    head = removeEl(head, 3);
    print(head);
    return 0;
}
