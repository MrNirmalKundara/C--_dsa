#include<iostream>
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

class info{
    public:
      bool isBST;
      int min;
      int max;
      int sz;
      int sum;

      info(bool isBST,int min,int max,int sz,int sum){
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->sz = sz;
        this->sum = sum;
      }
};

static int maxSize;
static int maxSum;

info* largestBST(Node* root){
    if(root==NULL){
       return new info(true, INT_MAX , INT_MIN ,0,0);
    }

    info* leftinfo = largestBST(root->left);
    info* rightinfo = largestBST(root->right);

    int currMin = min(root->data,min(leftinfo->min, rightinfo->min));
    int currMax = max(root->data, max(leftinfo->max, rightinfo->max));

    int currSz = leftinfo->sz + rightinfo->sz + 1;
    int currSum = leftinfo->sum + rightinfo->sum + root->data;

    if(leftinfo->isBST && rightinfo->isBST
       && root->data > leftinfo->max 
       && root->data < rightinfo->min){

        maxSize = max(maxSize,currSz);
        maxSum = max(maxSum,currSum); 
        return new info(true,currMin,currMax,currSz,currSum);
    }else{
        return new info(false,currMin,currMax,currSz,currSum);
    }
};
int main(){
    Node* root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(20);

    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    largestBST(root);
    cout << "larget size of BST.. " << maxSize << endl;
    cout << "largest BST of Sum .. " << maxSum << endl;
    return 0;
}