#include <bits/stdc++.h>
using namespace std;
long long int fib(long long int n)
{	long long int f[n+3],i;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n+2;i++)
		f[i] = f[i-1]+f[i-2];
	return f[n+2];
}
int main()
{	ios_base::sync_with_stdio(0);
	long int t;
	cin>>t;
	while(t--)
	{	long long int n;
		cin>>n;
		cout<<fib(n)<<endl;
	}
	return 0;
}
