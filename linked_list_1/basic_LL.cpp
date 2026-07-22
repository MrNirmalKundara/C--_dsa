#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node(int value){
           data = value;
           next = NULL;
       }

    //    ~Node(){
    //     cout << "Destructor called for ~Node" << endl;
    //     if(next != NULL){
    //         delete next;
    //         next = NULL;
    //     }
    //    }
};

class List{
    Node* head;
    Node* tail;

    public:
        List(){
            head = NULL;
            tail = NULL;
        }

        // ~List(){
        //     cout << "Destructor called for ~List" << endl;
        //     if(head != NULL){
        //         delete head;
        //         head = NULL;
        //     }
        // }

        void push_front(int value){
            Node* newnode = new Node(value);
            if(head == NULL){
                head = newnode;
                tail = newnode;
            }else{
                newnode->next = head;
                head = newnode;
            }
        }

        void push_back(int value){
            Node* newnode = new Node(value);
            if(head == NULL){
                head = tail = newnode;
            }else{
                tail->next = newnode;
                tail = newnode;
            }
        }

        void insert(int value,int pos){
            Node* newnode = new Node(value);
            Node* temp = head;

            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }

            newnode->next = temp->next;
            temp->next = newnode;
        }

        void pop_front(){
            if(head == NULL){
                cout <<"List is empty" << endl;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }

        void pop_back(){
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }

        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

int main(){
    List LL;
    LL.push_front(10);
    LL.push_front(5);
    LL.printList();
    cout << endl;
    LL.push_back(15);
    LL.push_back(20);
    LL.push_back(25);

    LL.insert(12,2);
    LL.printList();
    cout << endl; 

    LL.pop_front();
    LL.printList();
    cout << endl;

    LL.pop_back();
    LL.printList();
    cout << endl;

    return 0;
}