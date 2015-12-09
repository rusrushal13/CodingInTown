#include <iostream>
#include <map>
using namespace std;
map<long long,bool> a;
int main() 
{
	a[1]=true;
	long long b=1,c=1,n;
	while(b<=1000000000)
	{
		b=b+c*6;
		c++;
		a[b]=true;
	}
	cin>>n;
	while(n!=-1)
	{
		if(a[n])
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;
		cin>>n;
	}
 	return 0;
} 
