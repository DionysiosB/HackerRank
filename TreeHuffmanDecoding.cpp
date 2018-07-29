/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s){
    
    std::string t("");
    size_t ind(0);
    node *n = root;
    while(ind < s.size()){
        char u = s[ind++];
        if(u == '0'){n = n->left;}
        else if(u == '1'){n = n->right;}
        if(n->left == NULL && n->right == NULL){t += n->data; n = root;}
    }
    
    std::cout << t << std::endl;
    
}
