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

void preOrdertraversal(Node* root){
    if(root == NULL){
        return;
    }

     // step 1 : first print the root
    cout << root->data << " ";
     // step 2 : for left subtree
    preOrdertraversal(root->left);
     // step 3 : for right subtree
    preOrdertraversal(root->right);
}

void inOrdertraversal(Node* root){
    if(root == NULL){
        return;
    }

     // step 1 : for left subtree
    inOrdertraversal(root->left);
     // step 2 : print the root
    cout << root->data << " ";
     // step 3 : for right subtree
    inOrdertraversal(root->right);
}

void postOrdertraversal(Node* root){
    if(root == NULL){
        return;
    }

     // step 1 : for left subtree
    postOrdertraversal(root->left);
     // step 2 : for right subtree
    postOrdertraversal(root->right);
     // step 3 : print the root
    cout << root->data << " ";
}

void LevelOrdertraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* currNode = q.front();
        q.pop();

        if(currNode == NULL){
            cout << endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }
        else{
            cout << currNode->data << " ";
        
            if(currNode->left){
              q.push(currNode->left);
           }
           if(currNode->right){
              q.push(currNode->right);
            }
        }
   }
}
int main(){
    vector<int> preorder = {8,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(preorder);
  //  cout << "Root Node: " << root->data << endl;

    cout << "Preorder Traversal: ";
    preOrdertraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inOrdertraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postOrdertraversal(root);
    cout << endl;
    cout << endl;

    cout << "Levelorder Traversal: ";
    cout << endl;
    LevelOrdertraversal(root);
    cout << endl;

    return 0;
}