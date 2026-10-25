#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    string key;
    int value;
    Node* next;

    Node(string key, int value){
        this->key = key;
        this->value = value;
        this->next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class hashTable{
    int totalSize;
    int currSize;
    Node** table;

    int hashingFunc(string key){
        int idx = 0;

        for(int i=0;i<key.size();i++){
            idx = (idx + (key[i]*key[i]))%totalSize;
        }
        return idx;
    }

    void rehash(){   // rehash time complexity is O(n)
        Node** oldtable = table;
        int oldSize = totalSize;

        totalSize *= 2;
        table = new Node*[totalSize];

        for(int i=0;i<totalSize;i++){
            table[i] = NULL;
        }

            // Rehashing the old table into the new table
        for(int i=0;i<oldSize;i++){
            Node* head = oldtable[i];
            while(head != NULL){
                insert(head->key, head->value);
                head = head->next;
            }

            if(oldtable[i] != NULL){
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }

  public:
    hashTable(int Size=5){
        this->totalSize = Size;
        this->currSize = 0;
        this->table = new Node*[Size];

        for(int i = 0; i < Size; i++){
            this->table[i] = NULL;
        }
    }

    void insert(string key, int value){   // time complexity is O(1).
        int idx = hashingFunc(key);

        Node* newnode = new Node(key, value);
    
        newnode->next = table[idx];
        table[idx] = newnode;

        currSize++;

        double lambda = currSize / (double)totalSize;
        if(lambda > 1){   // time complexity O(n) in worst case
            rehash();
        }
    }

    bool exist(string key){
        int idx = hashingFunc(key);
        Node* temp = table[idx];

        while(temp != NULL){
            if(temp->key == key){
                cout << "Key exists" << endl;
                return true;
            }
            temp = temp->next;
        }
        // cout << "Key does not exist" << endl;
        return false;
    }

    int search(string key){  // time complexity is O(1) in average case and O(lambda) in worst case
        int idx = hashingFunc(key);
        Node* temp = table[idx];

        while(temp!=NULL){
            if(temp->key == key){
                return temp->value;
            }
            temp = temp->next;
        }
        return -1; // Key not found
    }

    void remove(string key){  // time complexity is O(1) in average case and O(lambda) in worst case
        int idx = hashingFunc(key);
        Node* temp = table[idx];
        Node* prev = NULL;
        
        while(temp != NULL){
            if(temp->key == key){
                if(prev == temp){
                    table[idx] = temp->next;
                }else{
                    prev->next = temp->next;
                }
                delete temp;
                return;
            }

            prev = temp;
            temp = temp->next;
        }
    }
    void print(){
        for(int i=0;i<totalSize;i++){
            Node* temp = table[i];
            cout << "idx " << i << ": ";
            while(temp!=NULL){
                cout << "(" << "Key: " << temp->key << ", Value: " << temp->value << ")" << "->"<< endl;
                temp = temp->next;
            }
            cout << endl;
        }
    }

};
int main(){
    hashTable ht;
    ht.insert("india", 110);
    ht.insert("USA", 220);
    ht.insert("UK", 390);
    ht.insert("Goa", 124);
    ht.insert("France", 8095);

    if(ht.exist("USA")){
        cout  << "USA Population is : " << ht.search("USA") << endl;
    }

    ht.remove("india");
    ht.print();

    return 0;
}