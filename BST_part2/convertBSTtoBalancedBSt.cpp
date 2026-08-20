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


void getInorder(Node* root,vector<int> &inorder){
    if(root == NULL){
        return;
    }
    getInorder(root->left,inorder);
    inorder.push_back(root->data);
    getInorder(root->right,inorder);
}

Node* BSTfromSortedvec(vector<int> &vect,int st,int end){
    if(st>end){
        return NULL;
    }

    int mid = st + (end-st) / 2;
    Node* curr = new Node(vect[mid]);

    curr->left = BSTfromSortedvec(vect,st,mid-1);
    curr->right = BSTfromSortedvec(vect,mid+1,end);

    return curr;
}

Node* buildBST(Node* root){
    vector<int> inorder;

    getInorder(root,inorder);

    return BSTfromSortedvec(inorder,0,inorder.size()-1);
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
     cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<int> vect = {6,5,4,3,7,8,9};

    Node* root = build(vect);
    cout << root->data << endl;

    Node* NewNode = buildBST(root);
    cout << NewNode->data << endl;
    
    preorder(NewNode);
    return 0;
}