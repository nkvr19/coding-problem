#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"ENter size:";
	int n;
	cin>>n;
	int m=n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m-1;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		m--;
		cout<<endl;
	}
}
