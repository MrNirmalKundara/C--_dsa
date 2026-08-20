#include<iostream>
#include<vector>
using namespace std;

class Node{
 public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};
 static int idx = -1;

Node* buildTree(vector<int> &preorder){
    idx++;
    if(idx >= preorder.size() || preorder[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(preorder[idx]);

    currNode->left = buildTree(preorder);
    currNode->right = buildTree(preorder);

    return currNode;
}
int main(){
    vector<int> preorder = {8,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(preorder);
    cout << "Root Node: " << root->data << endl;

    return 0;
}