#include<iostream>
#include<vector>
#include<queue>
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

// void preOrdertraversal(Node* root){
//     if(root == NULL){
//         return;
//     }

//      // step 1 : first print the root
//     cout << root->data << " ";
//      // step 2 : for left subtree
//     preOrdertraversal(root->left);
//      // step 3 : for right subtree
//     preOrdertraversal(root->right);
// }

int height(Node* root){
    if(root == NULL){
        return 0;
    } 

    int leftH = height(root->left);
    int rightH = height(root->right);

    int currH = max(leftH, rightH) + 1;
    return currH;
}
int main(){
    // vector<int> preorder = {8,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> preorder = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};


    Node* root = buildTree(preorder);
  //  cout << "Root Node: " << root->data << endl;

    //cout << "Preorder Traversal: ";
    // preOrdertraversal(root);
    // cout << endl;

    cout << "Height of the tree: " << height(root) << endl;

    return 0;
}