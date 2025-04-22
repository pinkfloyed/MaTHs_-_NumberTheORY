/// x^x=0, x^0=x
///swap elements using xor operation

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=10001,b=213472;
	a=a^b;  /// (a=a^b)
	b=b^a;  /// b=b^(a^b) = a
	a=a^b;  /// a=a^(b^a) = b
	cout<<a<<" "<<b<<endl;
}

/// given an array of n integers. all elements count is even except one element.
/// find that element in 0(n) time complexity and 0(1) space complexity.
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans^=a[i];
	}
	cout<<ans<<endl;
}
