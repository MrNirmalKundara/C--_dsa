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

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

    // brute force approach with O(n^2) time complexity
int diameter1(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int currDiameter = leftHeight + rightHeight + 1;

    int leftDiameter = diameter1(root->left);
    int rightDiameter = diameter1(root->right);

    return max(currDiameter, max(leftDiameter, rightDiameter));
}

    // optimized approach with O(n) time complexity
pair<int, int> diameter2(Node* root){

    if(root == NULL){
        return make_pair(0,0);
    }

    pair<int, int> leftInfo = diameter2(root->left);  // (diameter, height) (LD,LH)
    pair<int, int> rightInfo = diameter2(root->right);  // (RD,RH)

    int currDiameter = leftInfo.second + rightInfo.second + 1;
    int finalDiameter = max(currDiameter, max(leftInfo.first, rightInfo.first));
    int height = max(leftInfo.second, rightInfo.second) + 1;

    return {finalDiameter, height};
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(preorder);
    cout << "Root Node: " << root->data << endl;
    cout << "Height of the tree: " << height(root) << endl;
    cout << "Diameter of the tree: " << diameter1(root) << endl;

    cout << "Optimized Diameter of the tree: " << diameter2(root).first << endl;
    return 0;
}