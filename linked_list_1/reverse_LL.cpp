#include<iostream>
using namespace std;

// class Node{
//     public:
//         int data;
//         Node* next;

//         Node(int val){
//             data = val;
//             next = NULL;
//         }
// };

// class List{
//     Node* head;
//     Node* tail;

//     public:
//         List(){
//             head = NULL;
//             tail = NULL;
//         }

//         void push_front(int val){
//             Node* newnode = new Node(val);
//             if(head == NULL){
//                 head = tail = newnode;
//             }else{
//                 newnode->next = head;
//                 head= newnode;
//             }
//         }

//         void push_back(int val){
//             Node* newnode = new Node(val);
//             if(head == NULL){
//                 head = tail = newnode;
//             }else{
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }

//         void reverse(){
//             Node* curr = head;
//             Node* prev = NULL;
//             while(curr != NULL){
//                 Node* nextnode = curr->next;
//                 curr->next = prev;
//                 prev = curr;
//                 curr = nextnode;
//             }
//             head = prev;
//         }
//         void printList(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout << temp->data << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
//     };
    int main(){
        // List LL;
        // LL.push_back(1);
        // LL.push_back(2);
        // LL.push_back(3);
        // LL.push_back(4);
        // LL.push_back(5);
        // LL.printList();

        // cout << "Reversing the linked list..." << endl;
        // LL.reverse();
        // LL.printList();
        return 0;
    }