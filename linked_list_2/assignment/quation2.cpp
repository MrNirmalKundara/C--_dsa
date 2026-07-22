#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void deleteNnode(int m, int n) {
        Node* curr = head;
        Node* prev = NULL;

        while (curr != NULL) {
            for (int i = 1; i <= m && curr != NULL; i++) {
                prev = curr;
                curr = curr->next;
            }
            if (curr == NULL) {
                break;
            }

            for (int i = 1; i <= n && curr != NULL; i++) {
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }

            if (prev != NULL) {
                prev->next = curr;
            }
        }
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List LL;
    LL.push_back(1);
    LL.push_back(2);
    LL.push_back(3);
    LL.push_back(4);
    LL.push_back(5);
    LL.push_back(6);
    LL.push_back(7);
    LL.push_back(8);
    LL.push_back(9);
    LL.push_back(10);

    cout << "Original List: ";
    LL.printList();

    int m = 2, n = 2;
    LL.deleteNnode(m, n);

    cout << "Modified List (M=" << m << ", N=" << n << "): ";
    LL.printList();

    return 0;
}