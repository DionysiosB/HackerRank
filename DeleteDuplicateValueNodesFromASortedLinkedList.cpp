#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};Node* RemoveDuplicates(Node *head){
    
    Node * index = head;
    Node * temp;
    
    while(index != 0){
        if(index->next != 0 && index->next->data == index->data){
            temp = index->next;
            index->next = index->next->next;
            delete temp;
        }
        else{index = index->next;}
    }
    return head;
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
        int m;cin>>m;
        while(m--){
            int x; cin>>x;
            A = Insert(A,x);}
        A = RemoveDuplicates(A);
        Print(A);
    }
}
