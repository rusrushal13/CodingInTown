#include <bits/stdc++.h>
using namespace std;
map <long long int , long long int> h;
long long int f(long long int n)
{ 	if (n == 0)
		return 0;
  	long long int r = h[n];
  	if (r == 0)
  	{ 	r = max( n , f(n/2)+f(n/3)+f(n/4) );
    	h[n] = r;
  	}
  	return r;
}
int main()
{	ios_base::sync_with_stdio(0);
	long long int n;
	while(cin>>n)
		cout<<f(n)<<endl;
	return 0;
}
