#include <iostream>
#include <cstdio>
using namespace std;
int main() 
{	long long int j,i,x,y,sn=0,d=0,t,n,a;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{	scanf("%lld%lld%lld",&x,&y,&sn);
		n=(2*sn)/(y+x);
		d=(y-x)/(n-5);
		a=(x-(2*d));
		printf("%lld\n",n);
		for(j=0;j<n;j++)
			printf("%lld ",a+j*d);
		printf("\n");
	}
return 0;
}
