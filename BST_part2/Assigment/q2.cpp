#include<iostream>
#include<vector>
#include<climits>
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
Node* build(vector<int> &vect){
    Node* root = NULL;

    for(int i=0;i<vect.size()-1;i++){
        root = insert(root,vect[i]);
    }
    return root;
}

int minDiff(Node* root,int k){
    int min_diff = INT_MAX;
    int closest_Node = -1;

    while(root!=NULL){
        int curr_diff = abs(root->data - k);

        if(curr_diff < min_diff){
            min_diff = curr_diff;
            closest_Node = root->data;
        }

        if(k < root->data){
            return minDiff(root->left,k);
        }else if(k > root->data){
            return minDiff(root->right,k);
        }else{
            break;
        }
    }
    return closest_Node;
}
int main(){
    vector<int> vect = {8,5,3,6,11,20};
    Node* root = build(vect);
    cout << root->data << endl;
    
    cout << minDiff(root,5);
    return 0;
}