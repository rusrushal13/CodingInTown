#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,i;
       scanf("%d",&n);
       int a[n+9];
       for(i=0;i<n;i++)
           scanf("%d",&a[i]);
       long long sum=0;
       for(i=0;i<n/2;i++)
       {
            sum+=((n- 2*i -1)*(a[n-i-1] - a[i]));
       }
       printf("%lld\n",sum);
    }
    return 0;
} 
