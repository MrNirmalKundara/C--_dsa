#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      Node(int val){
           data = val;
           next = NULL;
      }
};

class List{
    public:
     Node* head;
     Node* tail;

    List(){
       head = tail = NULL;
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    void printList(){
        Node* temp = head;
        while(temp){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // int getSize(Node* head){
    //     int sz=0;
    //     while(head){
    //         head=head->next;
    //         sz++;
    //     }
    //     return sz;
    // }
    Node* intersection(Node* headA, Node* headB){
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        Node* p1 = headA;
        Node* p2 = headB;

        while(p1!=p2){

            if(p1==NULL){
                p1 = headB;
            }else{
                p1=p1->next;
            }
            
            if(p2==NULL){
                p2 = headA;
            }else{
                p2=p2->next;
            }
        }
        return p1;
    }
};
int main(){
    List L1;
    L1.push_back(1);
    L1.push_back(2);
    L1.push_back(3);
    
    Node* interSecNode1 = new Node(6);
    Node* interSecNode2 = new Node(7);
    interSecNode1->next = interSecNode2;

    L1.tail->next = interSecNode1;
    L1.tail = interSecNode2;

    cout << "List 1.." << endl;
    L1.printList();

    List L2;
    L2.push_back(4);
    L2.push_back(5);

    L2.tail->next = interSecNode1;
    L2.tail = interSecNode2;

    cout << "list 2.." << endl;
    L2.printList();

    List L3;
    L3.head = L2.intersection(L1.head,L2.head);
    cout << "Intersecting Node Starts At: ";
    L3.printList();
    return 0;
}