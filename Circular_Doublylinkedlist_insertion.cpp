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
void insertfront();
void insertend();
void printlinkedlist();
int x;
int main()
{
  cout<<"Enter a number";
  cin>>x;
  insertfront();
  cout<<"Enter a number";
  cin>>x;
  insertend();
  cout<<"Enter a number";
  cin>>x;
  insertfront();
  printlinkedlist();
  return 0;
}
void insertfront()
{
  Node* new_node=new Node();
  //cout<<"Y";
  if(head==NULL)
  {
      //cout<<"Y";
      head=new_node;
      new_node->next=new_node;
      new_node->prev=new_node;
      new_node->data=x;
  }
  else
  {
      new_node->prev=head->prev;
      new_node->next=head;
      new_node->data=x;
      head=new_node;
      head->prev=new_node;
  }
}
void insertend()
{
    Node* new_node=new Node();
    if(head==NULL)
  {
      head=new_node;

      new_node->next=new_node;
      new_node->prev=new_node;
      new_node->data=x;
  }
  else
  {
      new_node->prev=head->prev;
      new_node->next=head;
      new_node->data=x;
      head->prev=new_node;
  }
}
void printlinkedlist()
{   //cout<<"*";
    Node *start=head;
    //cout<<head->data;
    while(start!=NULL)
    {
        cout<<start->data;
        start=start->next;
    }
}
