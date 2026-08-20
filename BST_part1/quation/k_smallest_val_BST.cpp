#include<iostream>
#include<vector>
using namespace std;

class Node{
   public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr) , right(nullptr) {}
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

Node* buildtree(vector<int> &vect){
    Node* root = NULL;

    for(int i=0;i<vect.size();i++){
        root = insert(root,vect[i]);
    }
    return root;
}

void inOrder(Node* root,vector<int> &IOA){
    if(root==NULL){
        return;
    } 

    inOrder(root->left,IOA);
    IOA.push_back(root->data);
    inOrder(root->right,IOA);
}

int Ksmallest(Node* root,int k){
    vector<int> IOA;
    inOrder(root,IOA);

    return IOA[k-1];
}
int main(){
    vector<int> vect = {5,1,3,4,2,7};

    Node* root = buildtree(vect);
    cout << root->data << endl;

    // vector<int> IOA;
    // inOrder(root,IOA);

    // for(int i=0;i<IOA.size();i++){
    //     cout << IOA[i] << " ";
    // }
    // cout << endl;

    cout << Ksmallest(root,4);

    return 0;
}



