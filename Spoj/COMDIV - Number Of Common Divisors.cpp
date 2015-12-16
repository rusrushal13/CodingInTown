#include<bits/stdc++.h>
using namespace std;
int main()
{	long long int N,A,B,t;
	scanf("%lld",&t);
	while(t--)
	{	scanf("%lld%lld",&A,&B);
		N=__gcd(A,B);
		long long int ans = 0;
		long long int sqt = (long long int)sqrt(N);
		for(int i = 1 ; i <= sqt; i++)
		{
    		if(N % i == 0)
    		{
        		ans += 2 ;
        		if(i == N/i) 
        			ans--;
    		}
		}
		printf("%d\n",ans);
	}
return 0;
} 