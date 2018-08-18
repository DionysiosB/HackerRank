Node* insert(Node *head,int data){
  Node *n = new Node(data);
  if(head == NULL){head = n; return head;}
  Node *cn = head;
  while(cn->next != NULL){cn = cn->next;}
  cn->next = n;
  return head;
}
