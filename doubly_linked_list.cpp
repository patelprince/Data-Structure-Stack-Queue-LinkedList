#include<iostream>
using namespace std;
struct node
{
                int data;
                node *prev,*next;
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
                      newnode->prev=0;
                      newnode->next=0;

                      if(head==0)
                      {
                           head=temp=newnode;
                      }
                      else
                      {
                           temp->next=newnode;
                           newnode->prev=temp;
                           temp=newnode;
                      }
                      cout<<"Do you want to insert a node again(1/0)::";
                      cin>>choice;
                }
// Display a linked list
                 temp=head;
                 cout<<endl<<"Linked List:: ";
                 while(temp!=0)
                 {
                                 cout<<"["<<temp->prev<<"|"<<temp->data<<"|"<<temp->next<<"]"<<" ";
                                 temp=temp->next;
                 }

}
