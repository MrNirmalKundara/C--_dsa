#include<iostream>
#include<vector>
#include<queue>
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

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

        // for skewed BST or levelOrderTranversal
// vector<vector<int>> levelOrder(Node* root, vector<vector<int>> &ans) {
//         if (root == NULL) return ans;

//         queue<Node*> q;
//         q.push(root);

//         while (!q.empty()) {
//             int size = q.size(); 
//             vector<int> currentLevel;

//             for (int i = 0; i < size; i++) {
//                 Node* node = q.front();
//                 q.pop();

//                 currentLevel.push_back(node->data);

//                 if (node->left != NULL) q.push(node->left);
//                 if (node->right != NULL) q.push(node->right);
//             }

//             ans.push_back(currentLevel); 
//         }

//         return ans;
//     }

int main(){
    // vector<int> vect = {5,1,3,4,2,7};
    vector<int> vect = {1,2,3,4,5,6,7,8,9};

    Node* root = buildtree(vect);
    cout << root->data << endl;

    inorder(root);
    cout << endl;

//     vector<vector<int>> ans;
//     levelOrder(root,ans);

//     for (int i = 0; i < ans.size(); i++) {
//     cout << "Level " << i + 1 << ": ";
//     for (int j = 0; j < ans[i].size(); j++) {
//         cout << ans[i][j] << " ";
//     }
//     cout << endl;
// }
    
    return 0;
}



