#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"NEter the number of primes u want:";
	cin>>n;
	int isprim[n];
	isprim[0]=0;
	isprim[1]=0;
	for(int i=2;i<n;i++)
	{
		isprim[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(isprim[i]==1)
		{
			for(int j=i*i;j<n;j+=i)
			{
				isprim[j]=0;
			}
		}
	}
	cout<<"prime numbers are:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(isprim[i]==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	int ans=0;
	cout<<"prefix for above:"<<endl;
	{
		for(int i=0;i<n;i++)
		{
			if(isprim[i]==1)
			{
				ans+=i;
				cout<<ans<<" ";
			}
		}	
	}
}
