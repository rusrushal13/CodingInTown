#include<iostream>
using namespace std;
int main()
{	long long int k,t,n, i=0, j=0, m=0,sum=0,reverse=0;
	cin>>t;
	for(k=0;k<t;k++)
	{	i=0;
		j=0;
		cin>>n>>m;
		for( ;n!=0; )
		{	i=i*10; 	
			i=i+n%10; 	
			n/=10; 		
		}
		for(;m!=0;)
		{	j=j*10;
			j+=m%10;
			m/=10;
		}
		sum=i+j;	
		reverse=0;
		for(;sum!=0;)
		{	reverse=reverse*10;
			reverse=reverse+sum%10;
			sum/=10;
 
		}
		cout<<reverse<<endl;
	}
return 0;
}
