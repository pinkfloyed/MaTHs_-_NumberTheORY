/// lcm : Time complexity : 0(log(min(a,b))
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<(a*b)/__gcd(a,b)<<endl;
}
