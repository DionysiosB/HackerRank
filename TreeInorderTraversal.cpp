#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};

void inOrder(node *root) {
    if(root == NULL){return;}
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);

}

int main(){

    preOrder(NULL);

    return 0;
}
