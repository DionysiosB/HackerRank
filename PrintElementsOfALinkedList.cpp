#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head){
    
    while(head != 0){
        printf("%d\n", head->data);
        head = head->next;
    }
   
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}Node* Insert(Node *head,int x)
{
   Node *temp = new Node();
   temp->data = x;
   temp->next = NULL;
   if(head == NULL) 
   {
       return temp;
   }
   Node *temp1;
   for(temp1 = head;temp1->next!=NULL;temp1= temp1->next);
   temp1->next = temp;return head;
}
int main()
{
    int t;
    cin>>t;
    while(t-- >0)
    {
               
        int x; cin>>x;
         Node *head = NULL;
                while(x--)
                {
                     
                    int y;cin>>y;
                   head = Insert(head,y);
                }
            Print(head);
            free(head);
    }

}
