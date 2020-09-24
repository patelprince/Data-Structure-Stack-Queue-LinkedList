/*  STACK PROGRAMME */
#include<iostream>
#include<stack>
using namespace std;
int main()
{

stack<int> s;
int sum=0;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
//stack becomes 10, 20, 30, 40

while(!s.empty())
{
     sum=sum+s.top();
      s.pop();

}
cout<<"Sum of the elements of stack is:: "<<sum;
}
