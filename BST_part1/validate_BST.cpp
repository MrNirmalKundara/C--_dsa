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
        left=right=NULL;
    }
};

Node* insert(Node* root,int val){
    if(root==NULL){
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
Node* build(vector<int> &vect){
    Node* root = NULL;

    for(int i=0;i<vect.size();i++){
        root = insert(root,vect[i]);
    }
    return root;
}

bool validateHelper(Node* root,Node* min,Node* max){
    if(root==NULL){
        return true;
    }

    if(min != NULL && root->data<min->data){
       return false;
    }
    if(max!=NULL && root->data > max->data){
        return false;
    }

    return validateHelper(root->left,min,root) 
    && validateHelper(root->right,root,max);
}
bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);
}
int main(){
    vector<int> vect = {8,5,3,1,4,6,10,11,14};

    Node* root = build(vect);
    // cout << root->data << endl;

    cout << validateBST(root) << endl; 
    return 0;
}