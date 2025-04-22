/// Find subsets of n elements. n elements subset is 2^n. time complexity : 0(n*(2^n))
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	vector<vector<int>>ans;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int ct=(1<<n);
	for(int mask=0;mask<ct;mask++)
	{
		vector<int>sub;
		for(int i=0;i<n;i++)
		{
			if((mask & (1<<i))!=0)
			{
				sub.push_back(v[i]);
			}
		}
		ans.push_back(sub);
	}
	for(auto &it:ans)
	{
		for(auto &i:it)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}


