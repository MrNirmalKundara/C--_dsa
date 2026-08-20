#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

static int idx = -1;
Node* buildtree(vector<int> &preorder){
    idx++;
    if(preorder[idx] == -1){
        return nullptr;
    }

    Node* newNode = new Node(preorder[idx]);
    newNode->left = buildtree(preorder);
    newNode->right = buildtree(preorder);
    return newNode;
}

int kthancestor(Node* root,int node,int k){
    if(root == NULL){
        return -1;
    }

    if(root->data == node){
        return 0;
    }

    int leftDis = kthancestor(root->left,node,k);
    int rightDis = kthancestor(root->right,node,k);

    if(leftDis == -1 && rightDis == -1){
        return -1;
    }

    int validval = leftDis == -1 ? rightDis : leftDis;
    if(validval+1 == k){
        cout << "ancestor values : " << root->data << endl;
    }

    return validval+1;
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildtree(preorder);
    cout << root->data << endl;

    // kthancestor(root,5,2);
    kthancestor(root,6,1);
    
    return 0;
}