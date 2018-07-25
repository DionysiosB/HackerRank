/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int d){
    
    Node * a = new Node; a->data = d; a->prev = a->next = NULL;
    
    if(head == NULL || head->data >= d){
        a->next = head; 
        if(head != NULL){head->prev = a;}
        head = a; 
        return head;
    }
    
    Node *h = head;
    while((h->next != NULL) && (h->data < d)){h = h->next;}
    if(h->data > d){a->prev = h->prev; a->next = h; h->prev = a; a->prev->next = a;}
    else{h->next = a; a->prev = h;}
    
    return head;
}
