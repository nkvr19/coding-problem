//###############
//Largest sum of  subarray
//###############
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Nter size:";
	cin>>n;
	int arr[n];
	cout<<"NEter array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"longest sub array sum :";
	
	int mins=INT_MIN;
	int maxsum=0;
	for(int i=0;i<n;i++)
	{
		maxsum+=arr[i];
		if(mins<maxsum)
		{
			mins=maxsum;
		}
		if(maxsum<0)
		{
			maxsum=0;
		}
	}
	cout<<mins;
}
