#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
struct Node
{
    int data;
    Node* next;
};int FindMergeNode(Node *headA, Node *headB){
   
    int lengthA(0), lengthB(0);
    Node * indexA = headA; 
    Node * indexB = headB;
    
    while(indexA != 0){++lengthA; indexA = indexA->next;}
    while(indexB != 0){++lengthB; indexB = indexB->next;}
    
    indexA = headA; indexB = headB;
    int diff = lengthA - lengthB;
    
    if(diff > 0){while(diff--){indexA = indexA->next;}}
    else{while(diff++){indexB = indexB->next;}}
    
    int output(0);
    while(indexA != 0 && indexB != 0){
        if(indexA == indexB){output = indexA->data; break;}
        indexA = indexA->next; indexB = indexB->next;
    }
    
    return output;
    
}int main()
{
    Node *A, *B, *C, *D,*E,*F,*G;
    A = new Node(); B= new Node();  C= new Node(); D = new Node(); E = new Node(); F= new Node();G = new Node();
    A->data = 2; B->data = 4; C->data = 3; D->data = 5; E->data = 7; F->data = 6;G->data = 11;

    // case 1 = 
    A->next = B; B->next = C; C->next = D; D->next = E; E->next = NULL;
    F->next = G; G->next = C;
    cout<<FindMergeNode(A,F)<<"\n";
    //case 2.
    A->next = B; B->next = C; C->next = E;  E->next = NULL;
    F->next = G; G->next = D;D->next = C;
    cout<<FindMergeNode(A,F)<<"\n";
    //case 3:
    A->next = B; B->next = E; E->next = NULL;
    F->next = G; G->next = D;D->next = C; C->next = E;
    cout<<FindMergeNode(A,F)<<"\n";
}
