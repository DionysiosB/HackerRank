#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int x, int position){
    
    Node * added = new Node; added->data = x;
    
    if(position == 0){added->next = head; head = added;}
    else{
        Node * index = head;
        while(--position){index = index->next;}
        added->next = index->next;
        index->next = added;
    }
    
    return head;
    
}void Print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}

int main()
{
    int t;
    cin>>t;
        Node *head = NULL;
         head = new Node();
         head->data = 2;
         head->next = NULL;
    while(t-- >0){
        int x,n; cin>>x>>n;
         head = InsertNth(head,x,n);
    }
     Print(head);
       cout<<"\n";

}
