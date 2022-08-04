#include<bits/stdc++.h>
#include<algorithm>
using namespace  std;
int main()
{
	set<int>s;
	s.insert(10);
	s.insert(5);
	s.insert(1);
	s.insert(3);
	s.insert(6);
	
	//elements shows  in sorted order
	set<int>s2(s.begin(),s.end());//copying the last set in to new
	
	cout<<"size="<<s.size()<<endl;
	
	cout<<"maxsize="<<s.max_size()<<endl;
	
	cout<<s.empty()<<endl;
	
	
	
	//s.erase(6);
	
	//s.erase(s.find(5),s.end());
	
	cout<<*s.upper_bound(6)<<endl;
	
	cout<<*s.lower_bound(5)<<endl;
	
	//s2.clear();
	
	for(auto i:s2)
	{
		cout<<i<<" ";
	}
	
	}
