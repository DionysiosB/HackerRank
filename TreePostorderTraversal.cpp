#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};


void postOrder(node *root) {
    if(root == NULL){return;}
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);

}

int main(){

    preOrder(NULL);

    return 0;
}
