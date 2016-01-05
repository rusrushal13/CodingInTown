#include <bits/stdc++.h>
using namespace std;
int main() 
{	long int g,b;
	while(1)
	{	cin>>g>>b;
		if(g==-1 && b==-1)
			break;
		else if(g==0 && b==0)
			cout<<0<<endl;
		else if(g==b)
			cout<<1<<endl;
		else if(g>b)
			cout<<(g+b)/(b+1)<<endl;
		else
			cout<<(g+b)/(g+1)<<endl;
	}
	return 0;
} 