#include<bits/stdc++.h>
using namespace std;
int main()
{   long long int f = 1,n,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {   if(a[i] == 1)
        {   f = 0;
            break;
        }
    }
    if(f)
        cout<<1<<endl;
    else
        cout<<-1<<endl;
return 0;
}
