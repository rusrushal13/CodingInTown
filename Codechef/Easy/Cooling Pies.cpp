#include <bits/stdc++.h>
using namespace std;
#define iOS ios_base::sync_with_stdio(false)
int main() {
	iOS;
	long long int t;
	cin>>t;
	while(t--)
	{	long long int n;
		cin>>n;
		long long int k=0,i,a[n],b[n],count =0 ;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i = 0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n && k<n;)
		{	if(a[i]<=b[k])
			{	count+=1;
				i++;
				k++;
			}
			else if (a[i]> b[k])
				k++;		
		}
		cout<<count<<endl;
	}
	return 0;
}
