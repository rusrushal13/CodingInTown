#include<bits/stdc++.h>
using namespace std;
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
    /*lli t;
    cin>>t;
    while(t--)
    {   lli A;

    }*/
    lli n,t,i;
    cin>>n>>t;
    if(n==1 and t>=10)
       cout<<-1<<endl;
    else if(t == 10)
    {   cout<<1;
        for(i=0;i<n-1;i++)
            cout<<0;
    }
    else
    {   for(i=0;i<n;i++)
            cout<<t;
    }
    cout<<endl;
return 0;
}
