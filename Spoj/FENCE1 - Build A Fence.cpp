#include<iostream>
#include<iomanip>
using namespace std;
int main()
{	float t,A;
	while(t!=0)
	{	cin>>t;
		if(t==0)
			break;
		A=(t*t)/(2*3.14159265359);
		cout<<fixed<<setprecision(2)<<A<<endl;
	}
return 0;
} 