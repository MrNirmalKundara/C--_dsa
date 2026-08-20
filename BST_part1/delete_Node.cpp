#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
   int data;
   Node* left;
   Node* right;

   Node(int val){
    this->data = val;
    left = right = NULL;
   }
};

Node* insert(Node* root,int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }

    return root;
}
Node* buildBST(vector<int> &vect){
    Node* root = NULL;

    for(int i=0;i<vect.size();i++){
        root = insert(root,vect[i]);
    }

    return root;
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* getInorderSuccesor(Node* root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int val){
    if(root == NULL){
        return NULL;
    }

    if(val < root->data){
        root->left = deleteNode(root->left,val);
    } else if(val > root->data){
        root->right = deleteNode(root->right,val);
    }else{
           // root == Val
        // case 1 :- 0 children
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // case 2 :-- 1 children
        if(root->left==NULL || root->right==NULL){
            return root->left == NULL ? root->right:root->left;
        }

        // case 3 :-- 2 children
        Node* IS = getInorderSuccesor(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right,IS->data);

        return root;
    }
}
int main(){
    vector<int> vect = {8,5,3,1,4,6,10,11,14};

    Node* root = buildBST(vect);
    cout << root->data << endl;

    inorder(root);
    cout << endl;

    deleteNode(root,5);
    
    inorder(root);
    cout << endl;
    return 0;
}