#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int n,c,i,t;
	scanf("%lld",&t);
	while(t--)
	{	scanf("%lld%lld",&n,&c);
		long long int sum=0,a[n];
		for(i=0;i<n;i++)
		{	scanf("%lld",&a[i]);
			sum+=a[i];
		}
		if(sum<=c)
			printf("Yes\n");
		else
			printf("No\n");
	
	}
	return 0;
} 
