#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Node{
public:
    unordered_map<char, Node*> children;
    bool EndOfWord;
    Node(){
        EndOfWord = false;
    }
};

class Trie{
    Node* root;
    public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;
        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])==0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->EndOfWord = true;
    }

    bool search(string key){
        Node* temp = root;
        for(int i=0;i<key.size();i++){
            if(temp->children.count(key[i])==0){
                return false;
            }
            temp = temp->children[key[i]];
        }
        return temp->EndOfWord;
    }
};

int main(){
    vector<string> name = {"the","a","there","their","any" ,"there"};
    Trie trie;

    for(int i=0;i<name.size();i++){
        trie.insert(name[i]);
    }

    cout << "Searching for 'the': " << trie.search("the")<< endl;
    cout << "Searching for 'these': " << trie.search("there")<< endl;
}