#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class doublyList{
   public:
    Node* head;
    Node* tail; 

    doublyList(){
      head = tail = NULL;
    }

    void push_back(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head!=NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while(temp){
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};
int main(){
    doublyList dly;
    dly.push_back(4);
    dly.push_back(3);
    dly.push_back(2);
    dly.push_back(1);

    dly.printList();
    // cout << endl;

    dly.pop_front();
    dly.printList();

    return 0;
}