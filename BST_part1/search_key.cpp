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

bool searchKey(Node* root,int key){   // time complexity :-- O(height) - O(logn)
    if(root == NULL){
        return false;
    }

    if(root->data == key){
        return true;
    }
    else if(key < root->data){
        return searchKey(root->left,key);
    }else{
        return searchKey(root->right,key);
    }

    return false;
}
int main(){
    vector<int> vect = {5,1,3,4,2,7};

    Node* root = buildBST(vect);
    cout << root->data << endl;

    cout << searchKey(root,9);

    return 0;
}