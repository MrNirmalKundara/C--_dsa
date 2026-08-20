#include<iostream>
#include<vector>
#include<map>
#include<queue>

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

Node* buildTree(vector<int> &preorder){
    static int idx = -1;
    idx++;
    if(idx >= preorder.size() || preorder[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(preorder[idx]);
    currNode->left = buildTree(preorder);
    currNode->right = buildTree(preorder);

    return currNode;
}

void topview(Node* root){
    queue<pair<Node*, int>> q;  // (node, HD)
    map<int ,int> m;   // (HD, node->data)

    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node* ,int> curr = q.front();
        q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0){
            m[currHD] = currNode->data;
        }

        if(currNode->left != NULL){
            q.push(make_pair(currNode->left, currHD - 1));
        }
        if(currNode->right != NULL){
            q.push(make_pair(currNode->right, currHD + 1));
        }
    }
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->second << " ";
    }
    cout << endl;
}
int main(){
    vector<int> preorder = {1,2,-1,4,-1,5,-1,6,-1,-1,3,-1,-1};
    Node* root = buildTree(preorder);
    cout << "Root data: " << root->data << endl;

    cout << "Top view of the binary tree: ";
    topview(root);
    return 0;
}