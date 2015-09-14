#include <bits/stdc++.h>
using namespace std;
#define size 10002
#define iOS ios_base::sync_with_stdio(false)
int box[size];
void reset(){
for(int i=1;i<size;i++)
	box[i] = 0;
}
int main() {
	iOS;
	long long int t;
	cin>>t;
	while(t--)
	{	long long int i,n,b,c,d;
		cin>>n;
		for(i=1;i<=n;i++)
		{	cin>>b;
			box[b]+=1;
		}
		c = box[1];
		d = 1;
		for(i=1;i<size;i++)
		{	if(c<box[i])
			{	c = box[i];
				d = i;
			}
		}
		cout<<d<<" "<<c<<endl;
		reset();
	}
	return 0;
}
