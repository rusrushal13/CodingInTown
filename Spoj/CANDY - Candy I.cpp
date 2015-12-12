#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	while(1)
	{	long int i,n,sum=0, max1=0;
		scanf("%d",&n);
		long int a[n];
		if(n==-1)
			break;
		for(i=0;i<n;i++)
		{	scanf("%d",&a[i]);
            sum+=a[i];
		}
		if(sum%n==0)
		{	sum/=n;
			sort(a,a+n);
			for(i=n-1;i>=0;i--)
			while(a[i]>sum)
            {   a[i]--;
                max1++;
            }
            cout<<max1++<<endl;
		}
		else
			cout<<-1<<endl;
	}
	return 0;
}
