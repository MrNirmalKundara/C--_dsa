#include<iostream>
using namespace std;

class Node{
   public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue{

public:
    Node* head;
    Node* tail;
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newnode = new Node(data);
        if(head==NULL){
            head = tail = newnode;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop(){
        Node* temp = head;
        head = head->next;
        if(head == NULL){ 
           tail = NULL;
        }
        delete temp;
    }

    int front(){
        if(empty()){
            cout << "queue is empty.." << endl;
            return -1;
        }
        return head->data;
    }

    bool empty(){
        return head==NULL;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}