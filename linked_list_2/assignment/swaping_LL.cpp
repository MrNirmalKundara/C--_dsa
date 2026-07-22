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

    int getSize(){
        Node* temp = head;
        int sz = 0;
        while(temp != NULL){
            sz++;
            temp = temp->next;
        }
        return sz;
    }

    void swaping(int k){
        int sz = getSize();
    
        if(k<1 || k>sz){
            cout << "Invalid condition.." << endl;
            return;
        }
        if(2*k-1 == sz){
            return;
        }
        Node* first = head;
        for(int i=1;i<k;i++){
           first = first->next;
        }
        
        Node* second = head;
        for(int j=1;j<(sz-k+1);j++){
           second=second->next;
        }

        int temp = first->data;
        first->data = second->data;
        second->data = temp;
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
    LL.push_back(1);
    LL.push_back(2);
    LL.push_back(3);
    LL.push_back(4);
    LL.push_back(5);

    LL.printList();

    cout << "After modifiy the Linked list.. "<< endl;
    LL.swaping(2);
    LL.printList();
    return 0;
}