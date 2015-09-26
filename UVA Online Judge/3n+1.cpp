#include<bits/stdc++.h>
using namespace std;
int cycle(int n)
{   int len = 1;
    while(n>1)
    {   if(n%2==0)
            n = n/2;
        else
            n = 3*n+1;
        len++;
    }
    return len;
}
int main()
{   ios_base::sync_with_stdio(0);
    int i, j,lo,hi,n,maxlen = 0,len;
    while(cin>>i>>j)
    {   maxlen = 0;
        if(i>j)
        {   lo = j;
            hi = i;
        }
        else
        {   lo = i;
            hi = j;
        }
        for(n=lo;n<=hi;n++)
        {   len = cycle(n);
            if(maxlen<len)
            {   maxlen = len;
            }
        }
        cout<<i<<" "<<j<<" "<<maxlen<<endl;
    }
}
