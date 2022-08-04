#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int val;
	Node *left;
	Node *right;	
};
Node* createNode(int val)
{
	Node *root=new Node();
	root->val=val;
	root->left=NULL;
	root->right=NULL;
	return root;
}
vector<int> zigzag(Node *root,vector<int>&ans)
{
	
	queue<Node*>que;
	que.push(root);
	while(!que.empty())
	{
		Node *roo=que.front();
		que.pop();
		if(roo->left)
		{
			que.push(roo->left);
		}
		if(roo->right)
		{
			que.push(roo->right);
		}
		ans.push_back(roo->val);
		
			
	}
	return ans;
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
	
	cout<<"zigizag:"<<"\n";
	vector<int>ans;
	zigzag(root,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
}

