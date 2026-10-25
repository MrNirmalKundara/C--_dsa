#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Node{
    public:
    Node* child[26];
    bool end = false;
};

class Trie{
    Node* root = new Node();
    public:

    void insert(string word){
        Node* temp = root;
        for(int i=0;i<word.size();i++){
            int ch = word[i]-'a';
            if(temp->child[ch]==NULL){
                temp->child[ch] = new Node();
            }
            temp = temp->child[ch];
        }
        temp->end = true;
    }

    bool startWith(string prefix){
        Node* temp = root;
        for(int i=0;i<prefix.size();i++){
            int ch = prefix[i]-'a';
            if(temp->child[ch]==NULL){
                return false;
            }
            temp = temp->child[ch];
        }
        return true;
    }
};
int main(){
    vector<string> dict = {"apple","app","mango","man","woman"};
    Trie t;

    for(int i=0;i<dict.size();i++){
        t.insert(dict[i]);
    }

    // Test the startWith function
    cout << t.startWith("app") << endl;  // Output: 1 (true)
    cout << t.startWith("man") << endl;  // Output: 1 (true)
    cout << t.startWith("xyz") << endl;  // Output: 0 (false)

    return 0;
}

