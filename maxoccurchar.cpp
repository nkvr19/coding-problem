#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="nmsdbahjhcfnjhrfhja";
	int count[256]={0};//256 beacause there are 256 different charecters
	int ma=0;
	char r='2';
	int rep=0;
	for(int i=0;i<s.size();i++)
	{
		count[s[i]]++;
		if(ma<count[s[i]])
		{
			r=s[i];
			rep=count[s[i]];
		}
	}
	cout<<r<<" repeated "<<rep<<" times";
}
