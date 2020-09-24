#include<iostream>
using namespace std;
struct node
{
                int data;
                node *next;
};
int main()
{
                node *newnode, *tail;
                tail=0;
                int choice;
                while(choice)
                {
                      newnode=new node(); //node is created
                      cout<<"Enter Data in node:: ";
                      cin>>newnode->data;
                      newnode->next=0;

                      if(tail==0)
                      {
                           tail=newnode;
                           tail->next=newnode;
                      }
                      else
                      {
                           newnode->next=tail->next;
                           tail->next=newnode;
                           tail=newnode;
                      }
                      cout<<"Do you want to insert a node again(1/0)::";
                      cin>>choice;

                }
// Display a linked list
                  node *temp;
                 temp=tail->next;
                 cout<<endl<<"Linked List:: ";
                 while(temp->next != tail->next)
                 {

                                 cout<<temp->data<<" ";
                                 temp=temp->next;

                 }
                 cout<<" "<<temp->data;

}
