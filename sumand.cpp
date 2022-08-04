#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int a=0;
		
		a=arr[i];
		for(int j=i+1;j<n;j++)
		{
			int b=0;
			b=arr[j];
			if(i!=j and ((a+b)/2)==(a&b))
			{
				ans++;
			}
		}
	}
	cout<<ans/2;
}
