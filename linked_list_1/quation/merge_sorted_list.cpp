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
//         void push_back(int val){
//             Node* newnode = new Node(val);
//             if(head == NULL){
//                 head = tail = newnode;
//             }else{
//                 tail->next = newnode;
//                 tail = newnode;
//             }
//         }

//         Node* mergeList(Node* head1,Node* head2){
//             Node* dummy = new Node(0);
//             Node* dummyHead = dummy;
//             while(head1 != NULL && head2 != NULL){
//                 if(head1->data > head2->data){
//                     dummy->next = head2;
//                     head2 = head2->next;
//                 }else{
//                     dummy->next = head1;
//                     head1 = head1->next;
//                 }
//             if(head1 != NULL){
//                 dummy->next = head1;
//             }
//             if(head2 != NULL){
//                 dummy->next = head2;
//             }
//                 dummy = dummy->next;
//             }
//         return dummyHead->next;
//         }
//         void printList(){
//             Node* temp = head;
//             while(temp != NULL){
//                 cout << temp->data << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }

//         int getsize(){
//             Node* temp = head;
//             int sz=0;
//             while(temp != NULL){
//                 sz++;
//                 temp = temp->next;
//             }
//             return sz;
//         }
// };
int main(){
// List L1;
// L1.push_back(1);
// L1.push_back(2);
// L1.push_back(4);
// L1.printList();
// List L2;
// L2.push_back(1);
// L2.push_back(3);
// L2.push_back(4);
// L2.printList();

// cout << mergeList();
}