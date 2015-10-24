#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    long long int n,i,j;
    cin>>n;
    long long int a[n+2][n+2],b[n+2];
    for(i = 1;i<=n;i++)
    {    for(j = 1; j<=n;j++)
         {  cin>>a[i][j];
            if(i == j)
                b[i] = a[i][j]*a[i][j];
         }
    }
    if(n == 0)
        cout<<0;
    sort(b,b+n+1);
    for(i = 1;i<=n;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
return 0;
}
