#include <bits/stdc++.h>
using namespace std;
#define iOS ios_base::sync_with_stdio(false)
#define ll long long int
int main() {
	iOS;
	long long int i,j,n,x,count=0;
	cin>>n>>x;
	if(x == 1)
        count = 1;
	for ( i = 2; i <= n && (n*n>=x); i++ )
        if ( x % i == 0 )
            count+=1;
    cout<<count<<"\n";
	return 0;
}
