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

void getInorder(Node* root,vector<int> &Inorder){
    if(root==NULL){
        return;
    }

    getInorder(root->left,Inorder);
    Inorder.push_back(root->data);
    getInorder(root->right,Inorder);
}

Node* BSTfromSortedVec(vector<int> &merge,int st,int end){
    if(st>end){
        return NULL;
    }
    int mid = st + (end-st)/2;

    Node* curr = new Node(merge[mid]);

    curr->left = BSTfromSortedVec(merge,st,mid-1);
    curr->right =  BSTfromSortedVec(merge,mid+1,end);

    return curr;
}

Node* mergeBST(Node* root1,Node* root2){
    vector<int> node1;
    vector<int> node2;

    vector<int> merge;
    getInorder(root1,node1);
    getInorder(root2,node2);

    int i=0;
    int j=0;
    while(i<node1.size() && j<node2.size()){
        if(node1[i] < node2[j]){
            merge.push_back(node1[i++]);
        }else{
            merge.push_back(node2[j++]);
        }
    }

    while(i<node1.size()){
        merge.push_back(node1[i++]);
    }

    while(j<node2.size()){
        merge.push_back(node2[j++]);
    }

    return BSTfromSortedVec(merge,0,merge.size()-1);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);

} 
int main(){
    
    Node* root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node* root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);

    // cout << root2->data << endl;

    Node* mergeRoot = mergeBST(root1,root2);
    cout << "merge root is... " << mergeRoot->data << endl;

    preOrder(mergeRoot);
    cout << endl;
    return 0;
}