#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int,greater<int>>s;
	
	//greater<int> for put them in big to small
	
	s.insert(50);
	s.insert(20);
	s.insert(20);
	s.insert(1);
	s.insert(22);
	s.insert(20);
	
	s.erase(1);
	
	s.erase(s.find(20),s.end());
	
	//s.clear(); clears all values
	
	for(auto i:s)
	{
		cout<<i<<" ";
	}
	
	//here we can have the size,max_size,
}
