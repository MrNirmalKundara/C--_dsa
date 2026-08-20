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

void printRange(Node* root,int st,int end){
    if(root == NULL){
        return;
    }
    if(st <= root->data && root->data <= end){
        cout << root->data << " ";
        printRange(root->left,st,end);
        printRange(root->right,st,end);
    }
    else if(root->data < st){
        printRange(root->right,st,end);
    }
    else {
        printRange(root->left,st,end);
    }
}
int main(){
    vector<int> vect = {8,5,3,1,4,6,10,11,14};

    Node* root = build(vect);
    cout << root->data << endl;

    printRange(root,5,12);
    return 0;
}