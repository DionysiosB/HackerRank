int getHeight(Node* root){
    if(root == NULL){return 0;}
    else if(root->left == NULL && root->right == NULL){return 0;}
    
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);
    int maxHeight = (leftHeight > rightHeight) ? leftHeight : rightHeight;
    return (1 + maxHeight);
}
