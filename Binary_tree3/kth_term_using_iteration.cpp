#include<iostream>
#include<vector>
#include<queue>
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

// void kthLevel(Node* root,int k){
//     if( root == NULL){
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(nullptr);
//     int level = 1;

//     while(!q.empty()){
//         Node* currNode = q.front();
//         q.pop();
//         if(currNode == nullptr){
//             level++;
//             if(q.empty()){
//                 break;
//             }
//             q.push(nullptr);
//         }
//         else{
//             if(level == k){
//                 cout << currNode->data << " ";
//             }
//             if(currNode->left){
//                 q.push(currNode->left);
//             }
//             if(currNode->right){
//                 q.push(currNode->right);
//             }
//         }

//     }
//}

   // using kth level elemnt usinng recursion
void kthhelper(Node* root, int k, int level){
    if(root == nullptr){
        return;
    }
    if(level == k){
        cout << root->data << " ";
        return;
    }
    kthhelper(root->left, k, level + 1);
    kthhelper(root->right, k, level + 1);
}

void kthlevel(Node* root, int k){
    kthhelper(root, k, 1);
    return;
}
int main(){
    vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildtree(preorder);
    cout << root->data << endl;
    // kthLevel(root, 3);

       kthlevel(root, 3);

    return 0;
}