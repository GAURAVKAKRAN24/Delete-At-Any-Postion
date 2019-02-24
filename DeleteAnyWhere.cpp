#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
  int data;
  Node *next;
};
Node *head  = NULL;
void Create(int data)
{
  Node *NewNode = new Node;
  NewNode->data = data;
  NewNode->next = head;
  head = NewNode;
}
void DeletePostion(int pos)    //delete function take the postion as arguement/parameter
{
  Node *temp = head;
  if(pos == 1)                //If node postion equal to one then delete first node from linked list
  {
     head = temp->next;
     temp->next = NULL;
        cout<<"You deleted "<<temp->data<<endl;
     delete temp;
  }
  Node *ptr;
  for(int i=1;i<pos-1;i++)     //Here user enter the position to delete a particular node
  {
    temp = temp->next;
  }
  ptr = temp->next;
  temp->next= ptr->next;
     cout<<"You deleted "<<ptr->data<<endl;
  delete ptr;
}
void print()
{
  if(head == NULL)
  {
    cout<<"List is empty!\n";
    return;
  }
  Node *temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main()
{
  print();
  Create(10);
  Create(80);
  Create(30);
  Create(67);
  Create(34);
  Create(37);
  Create(23);
  Create(60);
  print();
  int pos;
  cout<<"Eneter : ";
  cin>>pos;
  DeletePostion(pos);
  print();
}
