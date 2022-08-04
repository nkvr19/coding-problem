#include<bits/stdc++.h>
#include<math.h>
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
	vector<vector<int> >ans;
	for(int i=0;i<pow(2,n);i++)
	{
		vector<int>sub;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			{
				sub.push_back(arr[j]);
			}
		}
		ans.push_back(sub);
	}
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
		
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
