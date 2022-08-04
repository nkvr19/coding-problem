#include<bits/stdc++.h>
using namespace std;
struct Node{
	
		int data;
		Node *left;
		Node *right;
};
Node *createNode(int val)
{
	Node* root=new Node();
	root->data=val;
	root->left=NULL;
	root->right=NULL;
	return root;
}

void inorder(Node *root,vector<int>&ans)
{
	if(root!=NULL)
	{
		inorder(root->left,ans);
		ans.push_back(root->data);
		inorder(root->right,ans);
	}
}
int main()
{
	Node *root = createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->right->left= createNode(6);
	root->right->right= createNode(7);
	vector<int>ans;
	inorder(root,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
	
}
