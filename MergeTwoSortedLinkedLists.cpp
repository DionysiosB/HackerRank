#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};Node* MergeLists(Node *headA, Node* headB){
    
    if(headA == 0){return headB;}
    else if(headB == 0){return headA;}
    
    Node * indexA = headA;
    Node * indexB = headB; 
    Node * temp = 0;
    Node * output = 0;
    
    if(headA->data < headB->data){
        output = headA;
        temp = headA; 
        indexA = headA->next;
    } 
    else{
        output = headB;
        temp = headB; 
        indexB = headB->next;
    }
    
    while(indexA != 0 && indexB != 0){
        if(indexA->data <= indexB->data){temp->next = indexA; indexA = indexA->next;}
        else if(indexB->data < indexA->data){temp->next = indexB; indexB = indexB->next;}
        temp = temp->next;
    }
    
    if(indexA == 0){temp->next = indexB;}
    else{temp->next = indexA;}
    
    return output;
    
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
        cout<<"\n";
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
        Node *B = NULL;
        int m;cin>>m;
        while(m--){
            int x; cin>>x;
            A = Insert(A,x);}
        int n; cin>>n;
        while(n--){
            int y;cin>>y;
            B = Insert(B,y);
        }
        A = MergeLists(A,B);
        Print(A);
    }
}
