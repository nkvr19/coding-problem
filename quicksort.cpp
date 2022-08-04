#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
	int lb=start;
	int t=0;
	int pivot=arr[start];
	while(start<end)
	{
		while(pivot>=arr[start])
		{
			start++;
		}
		while(pivot<arr[end])
		{
			end--;
		}
		if(start<end)
		{
			t=arr[start];
			arr[start]=arr[end];
			arr[end]=t;
		}
	}
	t=arr[lb];
	arr[lb]=arr[end];
	arr[end]=t;
	return end;
}

void quick(int arr[],int start,int end)
{
	if(start<end)
	{
		int p=partition(arr,start,end);
		quick(arr,start,p-1);
		quick(arr,p+1,end);
	}
}
int main()
{
	int arr[10]={25,66,21,12,1,65,22,94,4,33};
	int n=10;
	quick(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

