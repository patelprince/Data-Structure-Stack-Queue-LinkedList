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
                 int Count=0;
                 temp=head;
                 cout<<endl<<"Linked List:: ";
                 while(temp!=0)
                 {

                                 cout<<temp->data<<" ";
                                 temp=temp->next;
                                 Count++;
                 }
//  Length of the linked list
cout<<endl<<"Length is:: "<<Count;


//Insertion_at_Beginning
          newnode=new node();
          cout<<endl<<endl<<"Enter data in node that you want to insert at beginning:: ";
          cin>>newnode->data;
          newnode->next=head;
          head=newnode;
// Display a linked list After inserting a node at the beginning
                 int Count1=0;
                 temp=head;
                 cout<<"Linked List After inserting a node at the beginning:: ";
                 while(temp!=0)
                 {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                    Count1++;
                 }
//  Length of the linked list
cout<<endl<<"Length is:: "<<Count1;


//Insertion_at_End
          newnode=new node();
          cout<<endl<<endl<<"Enter data in node that you want to insert at the end:: ";
          cin>>newnode->data;
          newnode->next=0;
          temp=head;
          while(temp->next!=0)
          {
                temp=temp->next;
          }
          temp->next=newnode;
// Display a linked list After inserting a node at the end
                 int Count2=0;
                 temp=head;
                 cout<<"Linked List After inserting a node at the end:: ";
                 while(temp!=0)
                 {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                    Count2++;
                 }
//  Length of the linked list
cout<<endl<<"Length is:: "<<Count2;


//Insertion_at_given_position
          newnode=new node();
          int pos,i=1;
          cout<<endl<<endl<<"Enter position at which you want to insert a node:: ";
          cin>>pos;
          if(pos>Count2)
          {
                cout<<"Invalid Position";
          }
          else
          {
          cout<<"Enter data in node that you want to insert after "<<pos<<" position:: ";
          cin>>newnode->data;
          temp=head;
          while(i<pos)
          {
                temp=temp->next;
                i++;
          }
          newnode->next=temp->next;
          temp->next=newnode;

// Display a linked list After inserting a node at the end
                 int Count3=0;
                 temp=head;
                 cout<<"Linked List After inserting a node at given position:: ";
                 while(temp!=0)
                 {
                    cout<<temp->data<<" ";
                    temp=temp->next;
                    Count3++;
                 }
//  Length of the linked list
cout<<endl<<"Length is:: "<<Count3;
          }
}
