#include<bits/stdc++.h>
using namespace std;
int st[100],n=100,top=-1;
void push(int val)
{
	if(top>=n-1)
	{
		cout<<"statck overflow"<<endl;
	}
	else
	{
		top++;
		st[top]=val;
		cout<<val<<" Inserted"<<endl;
	}
}
void pop()
{
	if(top<=-1)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
		cout<<"popped element is"<<st[top]<<endl;
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		cout<<"stack elements are:";
		for(int i=top;i>=0;i--)
		{
			cout<<st[i];
		}
		cout<<endl;
	}
	else
	{
		cout<<"stack is empty";
	}
}
int main()
{
	int val;
	cin>>val;
	push(val);
	pop();
	display();
}
