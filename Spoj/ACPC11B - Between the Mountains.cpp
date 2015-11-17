#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int m;
        scanf("%d",&m);
        int b[m];
        for(i=0;i<m;i++)
            scanf("%d",&b[i]);
        int diff=1000000,s,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]>b[j])
                    s= a[i]-b[j];
                else
                    s= b[j]-a[i];
                if(s<diff)
                    diff=s;


            }
        }
        printf("%d\n",diff);
    }
    return 0;
}
