#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
	for(int j=10;j>=0;j--)
	{
		cout<<((n>>j)&1);
	}
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=10;j>=0;j--)
		{
			cout<<((i>>j)&1);
		}
		cout<<endl;
		/// binary(i);
	    if(i&1)
		{
			cout<<"odd"<<endl;
		}
		else
		{
			cout<<"even"<<endl;
		}
	}
	cout<<(n>>1)<<endl;  /// divide by 2
	cout<<(n<<1)<<endl;  /// multiply by 2
	for(char c='A';c<='Z';c++)
	{
		cout<<c<<endl;
		binary(int(c));
	}
	for(char c='a';c<='z';c++)
	{
		cout<<c<<endl;
		binary(int(c));
	}

	char A='A';
	char a=A|(1<<5);
	cout<<a<<endl;
	cout<<char(a&(~(1<<5)))<<endl;
	binary(int('_'));
	cout<<char('Z'+' ')<<endl;   /// uppercase to lowercase
	cout<<char('p'&'_')<<endl;   /// lowercase to uppercase

	binary(59);
	int x=59,i=4;
	int bt=(x&(~((1<<(i+1))-1)));   /// clear LSB's till ith bit
	binary(bt);

	int j=3;
	int ct=(x&((1<<(j+1))-1));      /// clear MSB's till ith bit
	binary(ct);


	/// Check if a number is power of 2 or not.
	int p;
	cin>>p;
	if(p&(p-1))   /// 16=00010000 & 15=00001111 = 00000000 (return true)
	{
		cout<<"no"<<endl;
	}
	else
	{
		cout<<"yes"<<endl;
	}
}
