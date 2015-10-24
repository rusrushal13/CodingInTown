#include<bits/stdc++.h>
using namespace std;
using std::cin;
using std::cout;
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
    int t;
    cin>>t;
    while(t--)
    {   double a,n,e = 0.0001;
        cin>>a;
        n = (360.0/(180.0-a));
        if(n-floor(n)<e)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
return 0;
}
