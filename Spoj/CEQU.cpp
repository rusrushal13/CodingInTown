#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin>>t;
	for(long long int T = 1;T<=t;T++)
	{	long long int a,b,c;
		cin>>a>>b>>c;
		if((c%__gcd(a,b))==0)
			cout<<"Case "<<T<<": Yes"<<endl;
		else
			cout<<"Case "<<T<<": No"<<endl;
	}
	return 0;
}
