/*  STACK PROGRAMME */
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{

stack<string> s;

s.push("Prince");
s.push("Sachin");
s.push("Rajan");
s.push("Sonu");
//stack becomes 10, 20, 30, 40

if(s.empty())
cout<<"Stack is Empty";

else
cout<<"Stack is not Empty";

cout<<endl<<"Stack becomes:: ";
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
}
