#include<iostream>
#include<list>
#include<stack>
using namespace std;


         // using list header file
// template<class T>
// class stack{
//     list<T> ll;

//     public:
//       void push(T val){
//         ll.push_front(val);
//       }

//       void pop(){
//         ll.pop_front();
//       }

//       T top(){
//         return ll.front();
//       }
// };


template<class T>
class Node{
  public:
    T data;
    Node<T>* next;

    Node(T val){
        data = val;
        next = NULL;
    }
};
template<class T>
class Stack{
  public:
    Node<T>* head;

    stack(){
        head = NULL;
    }
    void push(T val){
        Node<T>* newnode = new Node<T>(val);
        if(head == NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void pop(){
        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    // bool isEmpty(){
    //     return head==NULL;
    // }

};
int main(){
     // stack in STL
    stack<int> s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    // cout << s.top();

             // stack in STL
     while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}