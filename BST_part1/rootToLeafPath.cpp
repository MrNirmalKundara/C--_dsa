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


void printPath(vector<int> path){
    for(int i=0;i<path.size();i++){
        cout << path[i] << " ";
    }
    cout << endl;
}
void pathHelper(Node* root,vector<int> &path){
    if(root == NULL){
        return;
    }

    path.push_back(root->data);

    if(root->left==NULL && root->right==NULL){
        printPath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left,path);
    pathHelper(root->right,path);

    path.pop_back();
}
void rootToLeafPath(Node* root){
    vector<int> path;
    pathHelper(root,path);
}

int main(){
    vector<int> vect = {8,5,3,1,4,6,10,11,14};

    Node* root = build(vect);
    // cout << root->data << endl;

    rootToLeafPath(root);
    return 0;
}