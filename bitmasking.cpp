#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max_day=0,p1=-1,p2=-1;
	cin>>n;
	vector<int>masks(n,0);
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		int mask=0;
		for(int j=0;j<d;j++)
		{
			int x;
			cin>>x;
			mask=mask | (1<<x);
		}
		masks[i]=mask;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			///cout<<masks[i]<<endl;
			int intersection=(masks[i] & masks[j]);
			int c=__builtin_popcount(intersection);
			cout<<i<<" "<<j<<" "<<c<<endl;
			if(c>max_day)
			{
				max_day=c;
				p1=i;
				p2=j;
			}
		}
	}
	cout<<"max days works :"<<endl<<p1<<" "<<p2<<" "<<max_day<<endl;
}

/// given n workers. n<=30. each workers can work highest 30 days. no. of days are given of each workers. Have to find when two workers work on same days. We can apply bitmasking. 0(n^2*30) if bitmask not applied. if we apply bitmask, 0(n^2).Also find which two workers work max days on same days.
/*
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/
