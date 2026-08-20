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

Node* buildBalancedBST(vector<int> &vect,int st,int end){
    if(st>end){
        return NULL;
    }

    int mid = st + (end-st) / 2;
    Node* curr = new Node(vect[mid]);

    curr->left = buildBalancedBST(vect,st,mid-1);
    curr->right = buildBalancedBST(vect,mid+1,end);

    return curr;
}

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    vector<int> vect = {3,4,5,6,7,8,9};

    Node* root = buildBalancedBST(vect,0,6);
    cout << root->data << endl;

    preOrder(root);
    return 0;
}