#include <bits/stdc++.h>
using namespace std;
#define iOS ios_base::sync_with_stdio(false)
int main() {
	iOS;
	long long int a,b,c,d;
	cin>>a>>b;
	c = abs(a-b);
	d = c%10;
	if(d == 9)
		c-=1;
	else
		c+=1;
	cout<<c<<endl;
	return 0;
}
