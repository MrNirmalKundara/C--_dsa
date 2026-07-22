#include<iostream>
#include<stack>
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
    Node* head;
    Node* tail;

    public:
        List(){
            head = NULL;
            tail = NULL;
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
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

        int getsize(){
            Node* temp = head;
            int sz=0;
            while(temp != NULL){
                sz++;
                temp = temp->next;
            }
            return sz;
        }

        bool Ispalindrome(){
            stack<int> s;
            Node* temp = head;
            
            while(temp!=NULL){
               s.push(temp->data);
               temp = temp->next;
            }

            temp = head;
            while(temp!=NULL){
                if(head->data != s.top()){
                    cout << "that is not palindrome..." << endl;
                    return false;
                }
                s.pop();
                temp =temp->next;
            }
            cout << "that is palindrome..." << endl; 
            return true;
        }
};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(2);
    l.push_back(1);
    l.push_back(8);
    l.printList();

    l.Ispalindrome();
    return 0;
}