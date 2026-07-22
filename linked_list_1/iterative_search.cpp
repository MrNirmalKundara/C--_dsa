#include<iostream>
#include<cstdlib>
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

        void push_front(int val){
            Node* newnode = new Node(val);
            if(head == NULL){
                head = tail = newnode;
            }else{
                newnode->next = head;
                head= newnode;
            }
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

        void insert(int val,int pos){
            Node* newnode = new Node(val);
            Node* temp = head;\
            for(int i=0;i<pos-1;i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }

        void printList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }

        // int search(int key){
        //     Node* temp = head;
        //     int idx = 0;
        //     while(temp != NULL){
        //         if(temp->data == key){
        //             return idx;
        //         }
        //         temp = temp->next;
        //         idx++;
        //     }

        //     return -1;
        // }

        int searchHelper(Node* temp,int key){
            if(temp == NULL){
                return -1;
            }
            if(temp->data == key){
                return 0;
            }
            int idx = searchHelper(temp->next,key);
            if(idx == -1){
                return -1;  
            }
            return idx+1;
        }
           // search key using recursion
           int search(int key){
            return searchHelper(head, key);
           }
};
int main(){
    List LL;
    LL.push_front(20);
    LL.push_front(10);
    LL.push_back(5);

    LL.printList();
    cout << endl;

    LL.insert(15,2);
    LL.printList();

    // cout << "position of 15: " << LL.search(15) << endl;
    cout << "position of 15: " << LL.search(15) << endl;
    return 0;
}