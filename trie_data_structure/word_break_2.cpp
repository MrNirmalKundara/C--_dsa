#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool EndOfWord;
    Node() {
        EndOfWord = false;
    }
};

class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }

    void insert(string key) {
        Node* temp = root;
        for (int i = 0; i < key.size(); i++) {
            if (temp->children.count(key[i]) == 0) {
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->EndOfWord = true;
    }

    bool search(string key) {
        Node* temp = root;
        for (int i = 0; i < key.size(); i++) {
            if (temp->children.count(key[i]) == 0) {
                return false;
            }
            temp = temp->children[key[i]];
        }
        return temp->EndOfWord;
    }
};

class Solution {
public:
    void helper(string key, Trie& trie, string currentSentence, vector<string>& result) {
        // Base Condition: Jab string poori process ho jaye
        if (key.empty()) {
            // Last extra space ko remove karke result mein add karenge
            currentSentence.pop_back(); 
            result.push_back(currentSentence);
            return;
        }

        // String ko cut karke valid prefixes check karenge
        for (int i = 1; i <= key.size(); i++) {
            string first = key.substr(0, i);
            string second = key.substr(i);

            // Agar prefix Trie mein exist karta hai, to aage backtrack karenge
            if (trie.search(first)) {
                helper(second, trie, currentSentence + first + " ", result);
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        Trie trie;
        for (string word : wordDict) {
            trie.insert(word);
        }

        vector<string> result;
        helper(s, trie, "", result);
        return result;
    }
};

int main() {
    Solution sol;
    
    // Example 1
    string key1 = "catsanddog";
    vector<string> dict1 = {"cat", "cats", "and", "sand", "dog"};
    vector<string> ans1 = sol.wordBreak(key1, dict1);

    cout << "Output for '" << key1 << "':\n";
    for (string sentence : ans1) {
        cout << "\"" << sentence << "\"\n";
    }

    cout << "\n-------------------\n\n";

    // Example 2
    string key2 = "pineapplepenapple";
    vector<string> dict2 = {"apple", "pen", "applepen", "pine", "pineapple"};
    vector<string> ans2 = sol.wordBreak(key2, dict2);

    cout << "Output for '" << key2 << "':\n";
    for (string sentence : ans2) {
        cout << "\"" << sentence << "\"\n";
    }

    return 0;
}