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
    unsigned lli count = 0, count0 = 0,i,n,t;
    cin>>t;
    for(i = 0;i<t;i++)
    {   lli n;
        cin>>n;
        if(n)
        {   count++;
            if(count0 == 1 && i!= 1)
            {   count++;
            }
            count0 = 0;
        }
        else
        {   count0++;
        }
    }
    cout<<count<<endl;
return 0;
}
