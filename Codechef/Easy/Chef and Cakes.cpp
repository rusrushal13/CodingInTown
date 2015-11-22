#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {   long long int l,n,m;
        cin>>n>>m;
        l = n/__gcd(n,m);
        if(l==n)
            cout<<"Yes\n";
        else
            cout<<"No "<<l<<endl;
    }
return 0;
}
