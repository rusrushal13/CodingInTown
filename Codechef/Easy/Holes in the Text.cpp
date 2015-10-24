#include <iostream>
using namespace std;
int main() {
	// your code goes here
	char a[100];int j,count,i,t;
	cin>>t;
	for(;t>0;t--)
	{	cin>>a;
		count=0;
		for(j=0;a[j]!='\0';j++);
		for(i=0;i<j;i++)
		{	if(a[i]=='A'||a[i]=='D'||a[i]=='O'||a[i]=='P'||a[i]=='Q'||a[i]=='R')
				count+=1;
			else if(a[i]=='B')
				count+=2;
			
		}
		cout<<count<<endl;
	}
	return 0;
} 
