#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
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
}Node* Delete(Node *head, int position){
    
    Node * index = head;
    if(position == 0){head = head->next; delete index;}
    else{
        while(--position){index = index->next;}
        Node * toDelete = index->next;
        index->next = toDelete->next;
        delete toDelete;
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
    while(t-- >0){
        int x; cin>>x;
         Node *head = NULL;
                while(x--)
                {
                   int y;cin>>y;
                   head = Insert(head,y);
                }
       int pos;cin>>pos;
       head = Delete(head,pos);
       Print(head);
       cout<<"\n";
    }

}
