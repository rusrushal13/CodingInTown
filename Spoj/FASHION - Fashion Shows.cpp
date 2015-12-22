#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{	long long int n,a1[1000],t,i,j,k,a[1000];
	cin>>t;
	for(i=0;i<t;i++)
	{	cin>>n;
		long long int sum=0;
		for(j=0;j<n;j++)
			cin>>a[j];
		for(k=0;k<n;k++)
			cin>>a1[k];
		sort(a,a+n);
		sort(a1,a1+n);
		for(j=0;j<n;j++)
			sum+=(a[j]*a1[j]);
		cout<<sum<<endl;
	}
	return 0;
}
 