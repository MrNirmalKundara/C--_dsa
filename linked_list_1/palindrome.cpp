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
            Node* temp = head;
            int sz = getsize();
            int arr[sz];
            for(int i=0;i<sz;i++){      
                arr[i] = temp->data;
                temp = temp->next;
            }
            int st = 0,end = sz-1;
            while(st<end){
                if(arr[st++] != arr[end--]){
                    cout << "that is not palindrome "<< endl;
                    return false;
                }
            }
            cout << "that is valid palindrome ";
            return true;
        }
};
int main(){
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(2);
    l.push_back(1);
    l.printList();
    return 0;
}