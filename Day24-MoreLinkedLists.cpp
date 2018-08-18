Node* removeDuplicates(Node * const head){
  
  if(head == NULL){return NULL;}
  
  Node *cur = head;
  while(cur != NULL && cur->next != NULL){
      if(cur->data == cur->next->data){Node* d = cur->next; cur->next = cur->next->next; delete(d);}
      else{cur = cur->next;}
  }
  
  return head;
}
