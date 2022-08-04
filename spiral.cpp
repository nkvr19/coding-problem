#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mat[4][5]={{1,2,3,4,16},
					{5,6,7,8,17},
					{9,10,11,12,18},
					{13,14,15,16,19}};
	
	int top=0,bottom=sizeof(mat)/sizeof(mat[0]);
	int left=0,right=sizeof(mat[0])/sizeof(mat[0][0]);
	
	vector<int>ans;
	
	while(top<bottom & left<right)
	{
		for(int i=left;i<right;i++)
		{
			ans.push_back(mat[top][i]);
		}
		top+=1;
		for(int i=top;i<bottom;i++)
		{
			ans.push_back(mat[i][right-1]);
		}
		right-=1;
		for(int i=right-1;i>left-1;i--)
		{
			ans.push_back(mat[bottom-1][i]);
		}
		bottom-=1;
		for(int i=bottom-1;i>top-1;i--)
		{
			ans.push_back(mat[i][left]);
		}
		left+=1;
	}
	for(auto i:ans)
	{
		cout<<i<<" ";
	}
}
