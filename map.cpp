//same as pyhthon dictionary
//keys are unique
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>m;
	
	vector<int> vec={10,20,30,40,50,50,60,60,10,20,30,25};
	
	for(int i=0;i<vec.size();i++)
	{
		m[vec[i]]++;
	}
	
	
	cout<<m[10]<<endl;;;;;;;;
	
	cout<<m.size()<<endl;;
	
	cout<<m.max_size()<<endl;
	
	cout<<m.empty()<<endl;
	
	m.insert(pair<int,int>(5,6));
	
	//m.erase(60);
	
	m.erase(m.find(50),m.end());
	
	//m.clear(); clears all elements
	for(auto it:m)
	{
		cout<<it.first<<"-"<<it.second<<endl;
	}
	m.clear();
	
}

