#include<iostream>
#include<string>
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

    int counthelper(Node* root){
        int ans  = 0;
        for(Node* childNode : root->child){
            if(childNode!=NULL){
                ans += counthelper(childNode);
            }
        }
        return ans+1;
    }

    int countNode(){
        return counthelper(root);
    }
};

int countUniquesubstr(string s){
    Trie t;

    for(int i=0;i<s.size();i++){
        string suffix = s.substr(i);
        t.insert(suffix);
    }
    return t.countNode();
}
int main(){
    string s = "abc";
    cout << countUniquesubstr(s) << endl;
    return 0;
}