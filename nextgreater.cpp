#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enetr size:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int fl=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				cout<<arr[j]<" ";
				fl=1;
				break;
			}
		}
		if(fl==0)
		{
			cout<<"-1 ";
		}
		fl=0;
	}
	cout<<"-1 ";
}
