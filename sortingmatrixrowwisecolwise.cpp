#include<bits/stdc++.h>
using namespace std;
void sortrow(int mat[3][3])
{
	for(int i=0;i<(sizeof(mat[0])/sizeof(mat[0][0]));i++)
	{
		sort(mat[i],mat[i]+3);
	}
}
void transpose(int mat[3][3])
{
	int temp=0;
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}
}
int main()
{
	int mat[3][3]={{5,9,1},
				  {4,2,3},
				  {7,6,0}};
	
	sortrow(mat);
	transpose(mat);
	sortrow(mat);
	transpose(mat);
	
	for(int i=0;i<sizeof(mat[0])/sizeof(mat[0][0]);i++)
	{
		for(int j=0;j<sizeof(mat)/sizeof(mat[0]);j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
