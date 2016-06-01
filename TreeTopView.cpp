#include <cstdio>

struct node{
    int data;
    node* left;
    node* right;
};

void top_view(node * root){
    
    std::stack<int> s;
    node * n = root->left;
    while(n != NULL){s.push(n->data); n = n->left;}
    while(!s.empty()){printf("%d ", s.top()); s.pop();}
    n = root;
    while(n != NULL){printf("%d ", n->data); n = n->right;}
}

int main(){

    preOrder(NULL);

    return 0;
}
