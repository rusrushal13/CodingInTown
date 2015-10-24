#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,a,c[1001];
    cin>>n;
    for(int i=0;i<=n;i++) c[i]=1;
    vector<int> b;
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=n;j++)
        {   cin>>a;
            if(i!=j)
            {   if(a==1)
                    c[i]=0;
                else if(a==2)
                    c[j]=0;
                else if(a==3)
                {   c[i]=0;
                    c[j]=0;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
       if(c[i]==1)
           b.push_back(i);
    cout<<b.size()<<"\n";
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
return 0;
}
