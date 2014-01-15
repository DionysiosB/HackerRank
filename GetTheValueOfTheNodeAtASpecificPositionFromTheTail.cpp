#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};int GetNode(Node *head,int positionFromTail){
    
    Node * index = head; Node * indexTail = head;
    while(positionFromTail-- && indexTail != 0){indexTail = indexTail->next;}
    while(indexTail != 0 && indexTail->next != 0){indexTail = indexTail->next; index = index->next;}
    return index->data;
}void Print(Node *head)
{
    bool ok = false;
    while(head != NULL)
    {
        if(ok)cout<<" ";
        else ok = true;
        cout<<head->data;
        head = head->next;
    }
}
Node* Insert(Node *head,int x)
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
        Node *A = NULL;
        int m;cin>>m;
        while(m--){
            int x; cin>>x;
            A = Insert(A,x);}
        int n;cin>>n;
        cout<<GetNode(A,n)<<"\n";
    }
}
