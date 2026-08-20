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