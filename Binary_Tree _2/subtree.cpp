#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> &preorder){
    idx++;
    if(idx >= preorder.size() || preorder[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(preorder[idx]);
    currNode->left = buildTree(preorder);
    currNode->right = buildTree(preorder);
    return currNode;
}

bool isIdentical(Node* root, Node* subroot){
    if(root == NULL && subroot == NULL){
        return true;
    }
    else if(root == NULL || subroot == NULL){
        return false;
    }

    if(root->data != subroot->data){
        return false;
    }

    bool leftIdentical = isIdentical(root->left, subroot->left);
    bool rightIdentical = isIdentical(root->right, subroot->right);

    return leftIdentical && rightIdentical;
}
bool isSubtree(Node* root, Node* subroot){
    if(root == NULL && subroot == NULL){
        return true;
    }
    else if(root == NULL || subroot == NULL){
        return false;
    }

    if(root->data == subroot->data){
        return isIdentical(root, subroot); 
    }

    int isleftSubtree = isSubtree(root->left, subroot);
    if(!isleftSubtree){
        return isSubtree(root->right, subroot);
    }

    return true;
}

int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);

    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);

    cout << "Is subtree: " << isSubtree(root, subroot) << endl;
    return 0;
}