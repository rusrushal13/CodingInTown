# include <cstdio>
# include <algorithm>
using namespace std;
int main() 
{	long long int j,i,x,y,t,n;
	scanf("%lld",&t);
	for(j=0;j<t;j++)
	{	scanf("%lld%lld",&x,&y);
		if ((x & 1) != 1 && (y & 1) != 1)	
		{	printf("%lld %lld\n",y/__gcd(x,y),x/__gcd(x,y));
        	}
		else
			printf("%lld %lld\n",y/__gcd(x,y),x/__gcd(x,y));
	}	
return 0;
} 