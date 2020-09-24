#include<iostream>
using namespace std;
struct node
{
                int data;
                node *next;
};
int main()
{
                node *newnode, *temp, *head;
                head=0;
                int choice;
                while(choice)
                {
                      newnode=new node(); //node is created
                      cout<<"Enter Data in node:: ";
                      cin>>newnode->data;
                      newnode->next=0;

                      if(head==0)
                      {
                           head=temp=newnode;
                      }
                      else
                      {
                           temp->next=newnode;
                           temp=newnode;
                      }
                      cout<<"Do you want to insert a node again(1/0)::";
                      cin>>choice;
                }
// Display a linked list
                 int count=0;
                 temp=head;
                 cout<<endl<<"Linked List:: ";
                 while(temp!=0)
                 {

                                 cout<<temp->data<<" ";
                                 temp=temp->next;
                                 count++;
                 }
//  Length of the linked list
cout<<endl<<"Length is:: "<<count;

temp=head;
head=temp->next;
delete temp;
temp=head;
cout<<endl<<endl<<"Linked List after deletion:: ";
while(temp!=0)
{
  cout<<temp->data<<" ";
  temp=temp->next;
}
}
