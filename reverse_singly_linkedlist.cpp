#include<iostream>
using namespace std;
struct node
{
                 int data;
                 node *next;
};
int main()
{
                node *head, *newnode, *temp;
                head=0;
                int choice=1;
                while(choice)
                {
                                newnode=new node();
                                cout<<"Enter data:: ";
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
                cout<<"Do you want to insert another node press(1/0):: ";
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

//Code for reverse a Linked List
 node *prevnode, *currnode, *nextnode;
 prevnode=0;
 currnode=nextnode=head;
 while(nextnode!=0)
 {
       nextnode=nextnode->next;
       currnode->next=prevnode;
       prevnode=currnode;
       currnode=nextnode;
 }
head=prevnode;
cout<<endl<<"Successfully reversed a Linked_List";
}
