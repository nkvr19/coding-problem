#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node(int d)
		{
			data=d;
		}		
		Node* left;
		Node* right;
};
Node* createNode(int val)
{
	Node* root=new Node(val);
	root->left=NULL;
	root->right=NULL;
	return root;
}
vector<int> vertical(Node* root,vector<int>&ans)
{
	map<int,map<int,multiset<int>>> nodes;
	queue<pair<Node*, pair<int,int>>> todo;
	todo.push({root,{0,0}});
	while(!todo.empty())
	{
		auto p=todo.front();
		todo.pop();
		
	}
	
}
int main()
{
	Node *root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->right->left=createNode(6);
	root->right->right=createNode(7);
	
	vector<int>ans;
	vertical(root);
	
}
