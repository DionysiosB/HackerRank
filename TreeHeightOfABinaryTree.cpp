#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};

int height(node * root){
    
    if(root == NULL){return -1;}
    int leftHeight = height(root -> left);
    int rightHeight = height(root -> right);
    return 1 + ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}
  
int main(){

    preOrder(NULL);

    return 0;
}
