#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node* prev;
    Node* next;
    int data;
};
Node* head=NULL;
void frontinsertion();
void endinsertion();
void printlinkedlist();
int x;
int main()
{
    cout<<"Enter a number";
    cin>>x;
    frontinsertion();
    cout<<"Enter a number";
    cin>>x;
    endinsertion();
    cout<<"Enter a number";
    cin>>x;
    frontinsertion();
    printlinkedlist();
   return 0;
}
void frontinsertion()
{
if(head==NULL)
{
    Node* new_node=new Node();
    new_node->data=x;
    head=new_node;
    new_node->prev=NULL;
    new_node->next=NULL;
}
else
{
  Node* new_node=new Node();
  new_node->data=x;
  new_node->prev=NULL;
  new_node->next=head;
  head->prev=new_node;
  head=new_node;
}
}
void endinsertion()
{
    Node* new_node=new Node();
    new_node->data=x;
    if(head==NULL)
    {
        head=new_node;
        head->prev=NULL;
        head->next=NULL;
    }
    else
    {
        Node* start=head;
        while(start->next!=NULL)
        {
            start=start->next;
        }
        start->next=new_node;
        new_node->prev=start;
        new_node->next=NULL;

}
}
void printlinkedlist()
{
    //cout<<"Y";
    Node* start=head;
    while(start!=NULL)
    {
        cout<<start->data;
        start=start->next;
    }
}
