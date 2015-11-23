#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {   long long int l,n,x;
        cin>>n;
        cin>>l;
        for(long long int i = 1; i<n; i++)
        {   cin>>x;
            l = __gcd(l,x);
        }
        cout<<l*n<<endl;
    }
return 0;
}
