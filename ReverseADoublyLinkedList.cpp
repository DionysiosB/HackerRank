/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head){
    
    while(head != NULL){
        Node * temp = head->next;
        head->next = head->prev;
        head->prev = temp;
        if(temp == NULL){break;}
        head = temp;
    }
    
    return head;
}
