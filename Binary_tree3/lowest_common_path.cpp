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

Node* buildTree(vector<int> &preorder, int &idx){
    idx++;
    if(preorder[idx] == -1){
        return nullptr;
    }

    Node* newNode = new Node(preorder[idx]);
    newNode->left = buildTree(preorder, idx);
    newNode->right = buildTree(preorder, idx);
    return newNode;
}
       // Approach 1 :-- time complexity = O(n) and space complexity = O(n)
// bool rootToNodePath(Node* root,vector<int> &path,int n){
//     if(root == nullptr){
//         return false;
//     }

//     path.push_back(root->data);

//     if(root->data == n){
//         return true;
//     }

//     if(rootToNodePath(root->left,path,n) || rootToNodePath(root->right,path,n)){
//         return true;
//     }

//     path.pop_back();
//     return false;
// }

// int LowestCommonAncestor(Node* root,int n1, int n2){
//     vector<int> path1;
//     vector<int> path2;

//     rootToNodePath(root,path1,n1);
//     rootToNodePath(root,path2,n2);

//     int lca = -1;
//     for(int i=0,j=0;i<path1.size() && j<path2.size();i++,j++){
//         if(path1[i] != path2[j]){
//             return lca;
//         }
//         lca = path1[i];
//     }
//     return lca;
// }
  
      // Approach 2 :-- time complexity = O(n) and space complexity = O(1)
Node* LowestCommonAncestor(Node* root,int n1, int n2){
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LowestCommonAncestor(root->left, n1, n2);
    Node* rightLCA = LowestCommonAncestor(root->right, n1, n2);

    if(leftLCA && rightLCA){
        return root;
    }

    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main(){
   vector<int> preorder = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
   int idx = -1;
   Node* root = buildTree(preorder, idx);

//    vector<int> path1 = {};
//    cout << "path to 5 is : " << rootToNodePath(root,path1,5) << endl;

//    for(int i=0;i<path1.size();i++){
//        cout << path1[i] << " ";
//    }

    cout << "Lowest Common Ancestor of 4 and 5 is : " << LowestCommonAncestor(root,4,5)->data << endl;
    cout << "Lowest Common Ancestor of 4 and 6 is : " << LowestCommonAncestor(root,4,6)->data << endl;
    cout << "Lowest Common Ancestor of 3 and 4 is : " << LowestCommonAncestor(root,3,4)->data << endl;
    cout << "Lowest Common Ancestor of 2 and 4 is : " << LowestCommonAncestor(root,2,4)->data << endl;
    
    return 0;

}