#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    Node *next;
};Node* Reverse(Node *head){
    
    if(head != 0 && head->next != 0){
        
        Node * temp= head; Node * oldHead = head->next; temp->next = 0;
        
        while(oldHead != 0){
            temp = oldHead;
            oldHead = oldHead->next;
            temp->next = head;
            head = temp;
        }
    }
    
    return head;
        
}Node* Insert(Node *head,int x)
{
   Node *temp = new Node();
   temp->data = x;
   temp->next = NULL;
   if(head == NULL) return temp;
   Node *temp1 = head;
   while(temp1->next != NULL)
       temp1 = temp1->next;
   temp1->next = temp;
   return head;
}

void Print(Node* head)
{
    bool ok = true;
    while(head != NULL)
    {
        if(!ok) cout<<" ";
        else ok = false;
        cout<<head->data;
        head=head->next;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t-- >0){
        Node *head = NULL;
        int x;cin>>x;
        while(x--)
        {
          int n; cin>>n;
          head = Insert(head,n);
        }
        head = Reverse(head);
       Print(head);
       cout<<"\n";

    }

}
