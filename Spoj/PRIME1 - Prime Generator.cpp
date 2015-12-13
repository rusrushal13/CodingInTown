#include<iostream>
using namespace std;
bool isPrime(long long int n)
{	long long int i=0;
    	if (n <= 3)
    	{	return n > 1;
    	}
    	else if (n % 2 == 0 || n % 3 == 0)
    	{	return false;
    	}
    	else
    	{	for (i = 5; i * i <= n; i += 6)
    		{	if (n % i == 0 || n % (i + 2) == 0)
    			{	return false;
            		}
        	}
        	return true;
    	}
}
int main()
{	ios_base::sync_with_stdio(0);
    	long long int t,i,k,n,m;
	cin>>t;
	for(k=0;k<t;k++)
	{	cin>>n>>m;
		for(i=n;i<=m;i++)
		{	if(isPrime(i))
				cout<<i<<endl;
    		}
	}
return 0;
}
