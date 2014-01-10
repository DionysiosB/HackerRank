#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int x){
    
    Node* lastNode = new Node; lastNode->data = x; lastNode->next = 0;
    Node* index = head;
    if(index == 0){head = lastNode;}
    else{while(index->next != 0){index = index->next;}; index->next = lastNode;}
    return head;
}void Print(Node *head)
{
    Node *temp = head;
    while(temp!= NULL){ cout<<temp->data<<"\n";temp = temp->next;}
}
int main()
{
    int t;
    cin>>t;
    Node *head = NULL;
    while(t-- >0)
    {
        int x; cin>>x;
        head = Insert(head,x);
    }
    Print(head);
}
