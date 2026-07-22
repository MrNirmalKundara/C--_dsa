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

    void PrintList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int getSize(){
        Node* temp = head;
        int sz = 0;
        while(temp != NULL){
            sz++;
            temp = temp->next;
        }
        return sz;
    }

    void removeNth(int n){
        int sz = getSize();
        
        Node* prev = head; 
        for(int i = 1; i < sz-n; i++){
            prev = prev->next;
        }
        Node* todelete = prev->next;
        cout << "Deleted node: " << todelete->data << endl;
        prev->next = prev->next->next;
        delete todelete;
    }
};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.PrintList();
    cout << endl;
    l.removeNth(3);
    l.PrintList();
    return 0;
}