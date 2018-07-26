/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root){
    
    std::deque<node *> q;
    q.push_back(root);
    while(!q.empty()){
        node* cur = q.front(); q.pop_front();
        if(cur == NULL){continue;}
        std::cout << (cur->data) << " ";
        if(cur->left != NULL){q.push_back(cur->left);}
        if(cur->right != NULL){q.push_back(cur->right);}
    }
    
    std::cout << std::endl;
    
    return;
}
