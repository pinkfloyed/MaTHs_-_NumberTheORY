/// 1. Simple method: Time Complexity: 0(min(a,b))

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
	ll r=min(a,b);
	while(r>1)
	{
		if(a%r==0 && b%r==0)
		{
			break;
		}
		r--;
	}
	return r;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}


/// 2. Euclidean algorithm : Time Complexity: 0(log(min(a,b)))
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
	if(a==0)
	{
		return b;
	}
	if(b==0)
	{
		return a;
	}
	if(a==b)
	{
		return a;
	}
	if(a>b)
	{
		return gcd(a-b,b);
	}
	else
	{
		return gcd(a,b-a);
	}
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}


/// 3. Modulo Based Euclidean Algorithm : Time Complexity: 0(log(min(a,b)))
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}


/// 4. Inbuilt Function : Time Complexity: 0(log(n))
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<__gcd(a,b)<<endl;
}


/// 5. Gcd find in Vector of Numbers : Time Complexity: O(n*log(max_element))
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	vector<ll>a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=a[0];
	for(ll i=1;i<n;i++)
	{
		ans=__gcd(ans,a[i]);
	}
	cout<<ans<<endl;
}
