#include <stdio.h>
int main() {
	long int n,k,f,t,t1;
	scanf("%ld",&t1);
	while(t1--)
	{	scanf("%ld%ld%ld%ld",&n,&k,&t,&f);
		printf("%ld\n",n+k*((f-n)/(k-1)));
	}
	return 0;
} 