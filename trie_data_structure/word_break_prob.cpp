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

bool helper(string key, Trie trie){
    if(key.empty()){
        return true;
    }
    for(int i=1;i<=key.size();i++){
        string first = key.substr(0,i);
        string second = key.substr(i);

        if(trie.search(first) && helper(second, trie)){
            return true;
        }
    }
    return false;
}

bool wordBreak(string key, vector<string> &name){
    Trie trie;
    for(int i=0;i<name.size();i++){
        trie.insert(name[i]);
    }
    return helper(key, trie);
}

int main(){
    vector<string> name = {"i","like","sam","samsung","mobile","ice"};
    string key = "ilikesamsung";
    cout << "Searching for '" << key << "': " << wordBreak(key, name)<< endl;
    return 0;
}