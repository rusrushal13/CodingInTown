#include<bits/stdc++.h>
using namespace std;
#define ll int
#define _cin	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
ll solve(ll n, ll k)
{	vector<ll>	v(n+1);
	v[1] =1;
	for(ll i =2;i<=n; ++i)
		v[i] =(((v[i-1]+k-1)%i) + 1);	
	return v[n];
}
int main()
{	_cin;
	while(1)
	{	ll n, k;
		cin>>n>>k;
		if(n == 0 && k ==0)	break;
		cout<<n<<" "<<k<<" "<<solve(n,k)<<endl;
	}
return 0;	
} 