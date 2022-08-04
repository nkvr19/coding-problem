#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"ENtye parenthesis str:";
	string s;
	cin>>s;
	if(s[0]=='}' || s[0]==')' || s[0]==']')
	{
		cout<<"flase";
	}
	else
	{
		stack<char>st;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(' || s[i]=='{' || s[i]=='[')
			{
				st.push(s[i]);
			}
			else if((s[i]==')' && st.top()=='(') || (s[i]==']' && st.top()=='[') ||
			 (s[i]=='}' && st.top()=='{'))
			 {
			 	st.pop();
			 }
		}
		if(st.empty())
		{
			cout<<" true";
		}
		else
		{
			cout<<"flase";
		}
		
	}
	
}
