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
	cout<<"Enter sum:"<<endl;
	int sum=0;
	cin>>sum;
	
	int check=0;
	int one=0,two=0;
	int w=0;
	for(int i=0;i<n;i++)
	{
		check+=arr[i];
		if(check==sum)
		{
			one=0;
			two=i+1;
			break;
			
		}
		while(check>sum)
		{
			check-=arr[w];
			w+=1;
			if(check==sum)
			{
				one=w;
				two=i+1;
				break;
			}			
		}
	}
	if(one==0 & two==0)
	{
		cout<<"not possible";
	}
	else
	{
		for(int i=one;i<two;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
