#include <iostream>
using namespace std;
int main()
{	int T,n,i,m,d,h[500],cnt=0;
	cin>>T;
	while(T--)
	{	cin>>n>>m>>d;
		cnt=0;
		for(i=0;i<n;i++)
		{	cin>>h[i];
			while((h[i]-=d)>0) 
				cnt++;
		}
	if(cnt>=m) 	cout<<"YES"<<endl;
	else 		cout<<"NO"<<endl;
	}
return 0;
}
