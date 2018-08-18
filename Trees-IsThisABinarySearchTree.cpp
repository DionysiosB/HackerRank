/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
    bool checkBST(Node* root) {
        const long MIN = -1e6;
        const long MAX = 1e6;
        return bstCheck(root, MIN, MAX);
    }

    bool bstCheck(Node *root, long lower, long upper){
        
        if(root == NULL){return true;}
        if(root->data <= lower || root->data >= upper){return false;}
        return bstCheck(root->left, lower, root->data) && bstCheck(root->right, root->data, upper);
    }
