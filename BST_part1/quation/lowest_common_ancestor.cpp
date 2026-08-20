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

// vector<int> RTLpath(Node* root,vector<int> &path,int p){
//     if(root == NULL){
//         return {};
//     }

//     path.push_back(root->data);

//     if(root->data == p){
//         return path;
//     }
    
//     if(root->data > p){
//         return RTLpath(root->left,path,p);
//     }else{
//         return RTLpath(root->right,path,p);
//     }
//     return path;
// }
// Node* lowestCA(Node* root,Node* p,Node* q){
//     vector<int> path1;
//     vector<int> path2;

//     RTLpath(root,path1,p);
// }


      // optimize method 

Node* lowestLA(Node* root,int p,int q){
    if(root == NULL){
        return NULL;
    }
    if(root->data > p && root->data > q){
        return lowestLA(root->left,p,q);
    }
    else if(root->data < p && root->data < q){
        return lowestLA(root->right,p,q);
    }
    else{
        return root;
    }
    return root;
}

int main(){
    vector<int> vect = {8,5,3,1,4,6,10,11,14};

    Node* root = build(vect);
    // cout << root->data << endl;

    // vector<int> path = {};
    // vector<int> ans = RTLpath(root,path,4);
    
    // for(int i=0;i<ans.size();i++){
    //     cout <<  ans[i] << " ";
    // }
    // cout << endl;

    cout << lowestLA(root,1,3)->data << endl;
    
    return 0;
}