#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter size for subarray:"<<endl;
	int k=0;
	cin>>k;
	
	for(int i=1;i<n;i++)
	{
		arr[i]+=arr[i-1];
	}
	
	int m=arr[k-1];
	int one=0,two=k-1;
	int j=0;
	for(int i=k;i<n;i++)
	{
		if(arr[i]-arr[j]>m)
		{
			one=j+1;
			two=i;
		}
		j+=1;
	}
	int cl=0,cl2=0;
	for(int i=0;i<n;i++)
	{
		cl2=arr[i];
		arr[i]-=cl;
		cl=cl2;		
	}
	//arr[i+1]-=cl;
	for(int i=one;i<=two;i++)
	{
		cout<<arr[i]<<" ";	
	}	
}
