#include<bits/stdc++.h>
using namespace std;
int main()
{
	int mat[4][4]={{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}};
	
	int left=0,right=4;
	int top=0,bottom=4;
	
	cout<<left<<" "<<right<<" "<<top<<" "<<bottom<<endl;
	vector<int>ans;
	
	while(left<right & top<bottom)
	{
		for(int i=top;i<bottom;i++)
		{
			ans.push_back(mat[i][left]);
		}
		left+=1;
		for(int i=left;i<right-1;i++)
		{
			ans.push_back(mat[bottom-1][i]);
		}
		bottom-=1;
		for(int i=right-1;i>=top;i--)
		{
			ans.push_back(mat[i][right-1]);
		}
		right-=1;
		for(int i=right-1;i>left-1;i--)
		{
			ans.push_back(mat[top][i]);
		}
		top+=1;
	}
	for(auto i:ans)
	{
		cout<<i<<" ";
	}
}
