#include<bits/stdc++.h>
using namespace std;
int q[100],n=100,front=-1,rear=-1;
void insert()
{
	int val;
	if(rear==n-1)
	{
		cout<<"Queue Overflow"<<endl;
	}
	else
	{
		if(front==-1)
		front=0;
		cout<<"Insert the element i qu:"<<endl;
		cin>>val;
		rear++;
		q[rear] =val;		
	}
}
void Delete()
{
	if(front==-1 || front>rear)
	{
		cout<<"quue underflow";
		return ;
	}
	else
	{
		cout<<"Element deleted from quuq is:"<<q[front]<<endl;
		front++;
	}
}
void display()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		cout<<"queue elements are:";
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	insert();
	Delete();
	display();
}
