#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node(int d)
		{
			data=d;
		}
		Node *next=NULL;
};
Node* reverse(Node* head)
{
	Node* current=head;
	Node* prev=NULL;
	Node* next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	return prev;
}
Node* insertbegin(Node* head,int d)
{
	Node* newnode=new Node(d);
	newnode->next=head;
	head=newnode;
	return head;
}
Node* insertend(Node* head,int d)
{
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	Node* newnode=new Node(d);
	temp->next=newnode;
	return head;	
}
Node* insertmiddle(Node* head,int d)
{                     
	Node* temp=head;
	Node* temp2=head;
	Node* remain;
	int len=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		len++;
	}
	len=len/2;
	Node* newnode=new Node(d);
	int i=0;
	while(i<len-1)
	{
		temp2=temp2->next;
		i++;
	}
	remain=temp2->next;
	temp2->next=newnode;
	newnode->next=remain;
	return head;	
}
Node* deletefront(Node* head)
{
	return head->next;
}
Node* deleteend(Node* head)
{
	Node* temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=NULL;
	return head;
}
Node* deletemiddle(Node* head)
{
	Node* temp=head;
	Node* temp2=head;
	Node* remain;
	int len=0;
	while(temp->next)
	{
		temp=temp->next;
		len++;
	}
	len=len/2;
	int i=0;
	while(i<len-1)
	{
		temp2=temp2->next;
		i++;
	}
	remain=temp2->next->next;
	temp2->next=remain;
	return head;
}
void print(Node* head)
{
	Node* temp=head;
	while(temp->next!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data;
	cout<<endl;
}
int main()
{
	Node *head=new Node(7);
	Node *one=new Node(8);
	Node *two=new Node(9);
	Node *three=new Node(10);
	Node *four=new Node(11);
	
	head->next=one;
	one->next=two;
	two->next=three;
	three->next=four;
	
	head=insertbegin(head,5);
	print(head);
	head=insertend(head,15);
	print(head);
	head=insertmiddle(head,2);
	print(head);
	head=insertmiddle(head,1);
	print(head);
	head=deletefront(head);
	print(head);
	head=deleteend(head);
	print(head);
	head=deletemiddle(head);
	print(head);
	head=reverse(head);
	print(head);	
}
