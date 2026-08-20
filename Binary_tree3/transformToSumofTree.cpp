#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

static int idx = -1;
Node* buildtree(vector<int> &preorder){
    idx++;
    if(preorder[idx] == -1){
        return nullptr;
    }

    Node* newNode = new Node(preorder[idx]);
    newNode->left = buildtree(preorder);
    newNode->right = buildtree(preorder);
    return newNode;
}

int transform(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftOld = transform(root->left);
    int rightOld = transform(root->right);
    int currOld = root->data;

    root->data = leftOld + rightOld;
    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }

    return currOld;
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
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildtree(preorder);
    cout << root->data << endl;

    transform(root);

    LevelOrdertraversal(root);
    return 0;
}