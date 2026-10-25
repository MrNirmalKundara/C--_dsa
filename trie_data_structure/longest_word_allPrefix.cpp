#include <iostream>
#include <string>
#include <vector>
#include<unordered_map>

using namespace std;

class Node {
public:
    unordered_map<char, Node*> child;
    bool end = false;
};

class Trie {
    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(string word) {
        Node* temp = root;
        for (int i = 0; i < word.size(); i++) {
            char ch = word[i];
            if (temp->child[ch] == NULL) {
                temp->child[ch] = new Node();
            }
            temp = temp->child[ch];
        }
        temp->end = true;
    }

    void longestWord_Helper(Node* root, string &ans, string temp) {
       for(pair<char, Node*> childNode : root->child){
            if(childNode.second->end){
                temp += childNode.first;
                if(temp.size() > ans.size() || (temp.size() == ans.size() && temp < ans)){
                    ans = temp;
                }
                longestWord_Helper(childNode.second, ans, temp);
                temp = temp.substr(0, temp.size() - 1); // Backtrack to previous state
            }
       }
    }

    string findLongestWord() {
        string ans = "";
        longestWord_Helper(root, ans, "");
        return ans;
    }
};

string longestWord(vector<string>& dict) {
    Trie t;
    for (string word : dict) {
        t.insert(word);
    }
    return t.findLongestWord();
}

int main() {
    vector<string> dict
     = {"a", "banana", "app", "appl", "ap", "apply", "apple"};
    cout << "Longest Word with all prefixes: " << longestWord(dict) << endl;
    return 0;
}