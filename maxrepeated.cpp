#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	int mi=0;
	int ans=0;
	for(auto it:m)
	{
		if(it.second>mi)
		{
			ans=it.first;
			mi=it.second;
		}
	}
	cout<<ans;
}
