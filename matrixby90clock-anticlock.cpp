#include<bits/stdc++.h>
using namespace std;
void reverserow(int mat[4][4])
{
	for(int i=0;i<sizeof(mat[0])/sizeof(mat[0][0]);i++)
	{
		reverse(mat[i],mat[i]+sizeof(mat[i])/sizeof(mat[i][i]));
	}
}
void transpose(int mat[4][4])
{
	int temp=0;
	int cols=(sizeof(mat[0])/sizeof(mat[0][0])); 
	int rows=(sizeof(mat[0])/sizeof(mat[0][0]));
	//cout<<cols<<rows;
	for(int i=0;i<rows;i++)
	{
		for(int j=i;j<cols;j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}
}
int main()
{
	int mat[4][4]={{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12},
					{13,14,15,16}};
	////anticlockwise				
//	reverserow(mat);
//	transpose(mat);
	//clockwise
	transpose(mat);
	reverserow(mat);
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
