#include <iostream>
using namespace std;
int main() 
{	long int t,i=0,j=0,ng,nm,ng1,nm1;
	cin>>t;
	for(i=0;i<t;i++)
	{	cin>>ng>>nm;
		long int sumn=0,summ=0;
		for(j=0;j<ng;j++)
		{	cin>>ng1;
			if(sumn<=ng1)
				sumn=ng1;
		}
		for(j=0;j<nm;j++)
		{	cin>>nm1;
			if(summ<=nm1)
				summ=nm1;
		}
		if(sumn>=summ)
			cout<<"Godzilla"<<endl;
		else if(summ>sumn)
			cout<<"MechaGodzilla"<<endl;
		else
			cout<<"uncertain"<<endl;
		sumn=0,summ=0;
	}
	return 0;
}