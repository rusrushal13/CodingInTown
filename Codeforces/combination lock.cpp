#include<bits/stdc++.h>
using namespace std;
#define trailzero(A) __builtin_ctzll(A)
#define leadzero(A) __builtin_clzll(A)
#define bitsset(A) __builtin_popcountll(A)
#define iOS ios_base::sync_with_stdio(0)
#define lli long long int
#define mod 1000000007
#define max 100000
#define vecl vector<lli>
#define veci vector<lli>::iterator
#define setl set<lli>
#define seti set<lli>::iterator
int main()
{   iOS;
    int t,i,x,x1,c,sum = 0;
    string a,b;
    cin>>t;
    cin>>a>>b;
    for(i=0;i<t;i++)
    {   x = a[i] - '0';
        x1 = b[i] - '0';
        c = x-x1;
        if(c<0)
        	c = -c;
        if(c<=5)
            sum+=(c);
        else
            sum+=(10-c);
    }
    cout<<sum<<endl;
return 0;
}
