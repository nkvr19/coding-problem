#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="subhash";
	string rev="";
	for(int i=0;i<s.length();i++)
	{
		rev=s[i]+rev;
	}
	cout<<rev;
}
