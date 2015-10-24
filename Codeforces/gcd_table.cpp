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
    lli i,a,x;
    map<lli, lli> m;
    map<lli, lli>::iterator itr;
    cin>>a;
    for(i=0;i<a*a;i++)
    {   cin>>x;
        m[x]++;
    }
    itr = m.begin();
    if(m.size() == 1)
    {   for(i=0;i<a;i++)
            cout<<itr->first<<" ";
    }
    else
    {   for(itr = m.begin(); itr!=m.end(); itr++)
        {   if((itr->second)&1)
                cout<<itr->first<<" ";
        }
    }
    printf("\n");
return 0;
}
