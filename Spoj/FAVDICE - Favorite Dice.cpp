#include <bits/stdc++.h>
using namespace std;
float sum(float n)
{	if(n==1)
		return n;
	else
		return (1/n)+(sum(n-1));
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{	float n;
		cin>>n;
		cout<<fixed<<setprecision(2)<<(sum(n)*n)<<endl;
	}
	return 0;
} 