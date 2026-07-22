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

    void removeCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "Cycle detected!" << endl;
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            cout << "No cycle exists." << endl;
            return;
        }
    
        slow = head;
        Node* prev = fast; 
        
        if(slow == fast){ 
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = NULL;
        } else {
            while(slow != fast){
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }
            prev->next = NULL; 
        }
        cout << "Cycle successfully removed." << endl;
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
    LL.push_front(4);
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);

    LL.tail->next = LL.head; 
    LL.removeCycle(LL.head);
    LL.printList(); 

    return 0;
}