#include <bits/stdc++.h>
using namespace std;
int main()
{   int i,k,c[1001],a=1,m=0,j=0,f=0;
    cin>>k;
    c[0] = 0;
    string s;
    cin>>s;
    for(i = 1;i<s.length();i++)
    {   if(a>=k)
        {   break;
        }
        for(j=0;j<=m;j++)
        {   if(s[i]==s[c[j]])
            {   f=1;
                break;
            }
        }
        if(f==0)
        {   a++;
            m++;
            c[m]=i;
        }
        f=0;
    }
    m++;
    c[m] = s.length();
    if(a<k)
    {   cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(i=1;i<=m;i++)
    {   for(j=c[i-1];j<c[i];j++)
            cout<<s[j];
        cout<<"\n";
    }
return 0;
}
