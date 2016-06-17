#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};


de * insert(node * root, int value){
    
    if(root == NULL){
        root = new node;
        root->data = value; root->left = NULL; root->right = NULL;
    }
    else{
        node * x = root;
        while(true){
            if(value < x->data){
                if(x -> left == NULL){
                    x-> left = new node; 
                    x-> left -> left = x -> left -> right = NULL; 
                    x-> left -> data = value;
                    break;
                }
                else{x = x->left;}
            }
            else if(value > x->data){
                if(x -> right == NULL){
                    x->right = new node; 
                    x->right->left = x->right->right = NULL; 
                    x->right->data = value;
                    break;
                }
                else{x = x->right;}
            }
        }      
        
    }
    
   return root;
}

 
int main(){

    preOrder(NULL);

    return 0;
}
