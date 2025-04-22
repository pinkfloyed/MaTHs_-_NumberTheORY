/// Print answer modulo 10^9+7
/// How it works : Modulo Arithmetic
/// 1. (a+b)% M = ((a%M)+(b%M))%M
/// 2. (a*b)% M = ((a%M)*(b%M))%M
/// 3. (a-b)% M = ((a%M)-(b%M)+M)%M
/// 4. (a/b)% M = ((a%M)*((b^-1)%M))%M

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long M=1e9+7;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,fact=1;
		cin>>n;
		for(ll i=2;i<=n;i++)
		{
			fact=(fact*i)%M;
		}
		cout<<fact<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	cout<<INT_MAX<<endl;
	int a=(1LL<<32)-1; /// signed int highest 31 bits store 1 bit sign bit to identify positive or negative.
	cout<<a<<endl;
	unsigned int b=(1LL<<32)-1; /// unsigned bit all positive numbers store so 32 bit can store it.
	cout<<b<<endl;
}

