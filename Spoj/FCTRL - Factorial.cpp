#include<stdio.h>
int main()
{	long long int t, count=0, n,i,j;
	scanf("%lld",&t);
	for(j=0;j<t;j++)
	{	scanf("%lld",&n);
		count=0;
		for(i=5;n/i>=1;i*=5)
		{	count+=n/i;
		}
		printf("%lld\n",count);
	}
return 0;
}