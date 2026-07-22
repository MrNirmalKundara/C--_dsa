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

    Node* splitAtMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next; 
        }

        if(prev!=NULL){
            prev->next = NULL;
        }
        return slow;
    }

    Node* reverse(Node* head){
            Node* curr = head;
            Node* prev = NULL;
            while(curr != NULL){
                Node* nextnode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextnode;
            }
            head = prev;
            return head;
        }

    Node* ZigZag(Node* head){
        Node* rightHead = splitAtMid(head);
        Node* revRightHead = reverse(rightHead); 

        Node* left = head;
        Node* right = revRightHead;
        Node* tail = right;

        while(left && right){
            Node* nextleft = left->next;
            Node* nextright = right->next;

            left->next = right;
            right->next = nextleft;

            tail = right;
            left = nextleft;
            right = nextright;
        }

        if(right!=NULL){
          tail->next = right;
        }
        return head;
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
    List ll;
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(5);
    ll.push_back(7);
    ll.push_back(1);
    ll.push_back(9);

    cout << "Original List...";
    ll.printList();

    cout << "zig-zag List..   ";
    ll.ZigZag(ll.head);
    ll.printList();

    return 0;
}