#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* buildtree(vector<int> &preorder, int &idx){
    idx++;
    if(preorder[idx] == -1){
        return nullptr;
    }

    Node* newNode = new Node(preorder[idx]);
    newNode->left = buildtree(preorder, idx);
    newNode->right = buildtree(preorder, idx);
    return newNode;
}

Node* LowestCommonAncestor(Node* root,int n1, int n2){
    if(root == nullptr){
        return nullptr;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LowestCommonAncestor(root->left, n1, n2);
    Node* rightLCA = LowestCommonAncestor(root->right, n1, n2);

    if(leftLCA && rightLCA){
        return root;
    }

    if(leftLCA != nullptr){
        return leftLCA;
    }
    else{
        return rightLCA;
    }
}
int distanceFromRoot(Node* root, int n){
    if(root == nullptr){
        return -1;
    }

    if(root->data == n){
        return 0;
    }

    int leftDistance = distanceFromRoot(root->left, n);
    if(leftDistance != -1){
        return leftDistance + 1;
    }

    int rightDistance = distanceFromRoot(root->right, n);
    if(rightDistance != -1){
        return rightDistance + 1;
    }

    return -1;
}

int minimumDistance(Node* root, int n1, int n2){
    Node* lca = LowestCommonAncestor(root, n1, n2);
    int distance1 = distanceFromRoot(lca, n1);
    int distance2 = distanceFromRoot(lca, n2);
    return distance1 + distance2;
}
int main(){
    vector<int>preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = -1;
    Node* root = buildtree(preorder, idx);
    cout << root->data << endl;
    cout << "Distance from root to 4: " << distanceFromRoot(root, 4) << endl;
    cout << "Distance from root to 5: " << distanceFromRoot(root, 5) << endl;
    
    cout << "Minimum distance between 4 and 5: " << minimumDistance(root, 4, 5) << endl;
    return 0;
}