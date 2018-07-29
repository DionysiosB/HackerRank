/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2){
    
    if(root == NULL || root->data == v1 || root->data == v2){return root;}
    
    node * ln = lca(root->left, v1, v2);
    node * rn = lca(root->right, v1, v2);
    
    if(ln != NULL && rn != NULL){return root;}
    else{return (ln != NULL) ? ln : rn;}
    
    return NULL;   //Should never reach this
}
