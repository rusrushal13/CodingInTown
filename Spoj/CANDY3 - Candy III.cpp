#include <bits/stdc++.h>
using namespace std;
int main() 
{	long long unsigned int p;
	cin>>p;
	while(p--)
	{	long long unsigned int a,sum=0,i,n;
		cin>>n;
		for(i=0;i<n;i++)
		{	cin>>a;
			sum+=a%n;
			if(sum>n)
				sum=sum%n;
		}
		if(sum%n==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
} 
