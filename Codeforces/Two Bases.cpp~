#include <bits/stdc++.h>
using namespace std;
long long int a,b,n,k,t;
int main()
{	ios_base::sync_with_stdio(0);
	cin >> n >> k;
	for(long long int i=n-1;i>=0;i--)
	{	cin >> t;
		a+=t*pow(k,i);
	}
	cin >> n >> k;
	for(long long int i=n-1;i>=0;i--)
	{	cin >> t;
		b+=t*pow(k,i);
	}
	if(a==b)
		cout << "=";
	else if(a>b)
			cout << ">";
	else
		cout << "<";
	return 0;
}
