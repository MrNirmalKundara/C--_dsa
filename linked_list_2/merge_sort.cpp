#include<iostream>
#include<list>
#include<iterator>
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
    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

};

Node* merge(Node* left, Node* right){
    List ans;
    Node* i = left;
    Node* j = right;

    while( i && j ){
        if(i->data >= j->data){
            ans.push_back(j->data);
            j=j->next;
        }else{
            ans.push_back(i->data);
            i=i->next;
        }
    }

    while(i){
        ans.push_back(i->data);
        i=i->next;
    }
    while(j){
        ans.push_back(j->data);
        j=j->next;
    }

    return ans.head;
}
Node* splitAtHead(Node* head){
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


Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* rightHead = splitAtHead(head);
    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left,right);
}

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

    ll.head = mergeSort(ll.head);
    cout << "sorted list...";
    ll.printList();
    return 0;
}