/// Check a number's ith bit is set or not. print binary numbers of given number.

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long M=1e9+7;
void binary_print(int n)
{
	for(int i=10;i>=0;i--)
	{
		/// here, each ith bit is right shift to 1st position or 1st bit and checks by logical and 1 it is set or unset.
		cout<<((n>>i)&1); /// n=9; binary representation 00000001001
	}
	cout<<endl;
}
int main()
{
	int a=16,i=3,c=0; /// 1001 (set means 1, not set means 0)
	binary_print(a);
	if((a & (1<<i))!=0)
	{
		cout<<"set bit"<<endl;
	}
	else
	{
		cout<<"not set bit"<<endl;
	}
	binary_print(a|(1<<i));  /// ith bit set.
	binary_print(a&(~(1<<3))); /// ith bit unset. ~ means to invert 1 to 0, 0 to 1. then logical and operation.
	binary_print(a^(1<<2));    /// toggle bit (0 to 1, 1 to 0 convert)
	for(int i=31;i>=0;i--)
	{
		if((a&(1<<i))!=0)
		{
			c++;    /// no. of bits count in a binary number.
		}
	}
	cout<<c<<endl;

	cout<<__builtin_popcount(a)<<endl; /// this works only for int values.
	cout<<__builtin_popcountll((1LL<<64)-1)<<endl;  /// this works for long long int type.
}

