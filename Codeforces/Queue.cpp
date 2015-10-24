#include<bits/stdc++.h>
using namespace std;
#define iOS ios_base::sync_with_stdio(0)
#define lli long long int
int main()
{   iOS;
    lli n,b = 0,count =0,i;
    cin>>n;
    lli a[n],sum=0;
    for(lli i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {   if(sum<=a[i])
           { count++;
            sum+=a[i];}
    }
    cout<<count;
return 0;
}
