#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};


void preOrder(node *root) {
    if(root == NULL){return;}
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}


int main(){

    preOrder(NULL);

    return 0;
}
