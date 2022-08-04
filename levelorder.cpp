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
vector<int> zigzag(Node *roo,vector<int>&ans)
{

	queue<Node*>que;
	que.push(roo);
	int fl=1;
	while(!que.empty())
	{
		int size=que.size();		
		vector<int>row(size);
		for(int i=0;i<size;i++)
		{
			roo=que.front();
			que.pop();
			row[i]=roo->val;
			if(roo->left)
			{
				que.push(roo->left);
			}
			if(roo->right)
			{
				que.push(roo->right);
			}
			//ans.push_back(row[i]); for level order
		}
		if(fl==1)
		{
			for(int i=0;i<row.size();i++)
			{
				ans.push_back(row[i]);
			}
			fl=0;
		}
		else if(fl==0)
		{
			for(int i=row.size()-1;i>=0;i--)
			{
				ans.push_back(row[i]);
			}
			fl=1;
		}

		
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
	
	cout<<"level order:"<<"\n";
	vector<int>ans;
	zigzag(root,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
}

