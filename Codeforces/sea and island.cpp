#include <bits/stdc++.h>
using namespace std;
int s[101][101];
int main()
{   ios_base::sync_with_stdio(0);
    int n,k,i,j,c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {   if(k==0)
            break;
        for(j=i%2;j<n;j+=2)
        {   s[i][j]=1;
            k-=1;
            if(k==0)
                break;
        }
    }
    if(k!=0)
    {   cout<<"NO";
        return 0;
    }
    cout<<"YES"<<"\n";
    for(i=0;i<n;i++)
    {   for(j=0;j<n;j++)
        {   if(s[i][j]==0)
                cout<<"S";
            else
                cout<<"L";
        }
        cout<<"\n";
    }
return 0;
}
