#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    if((t&(t-1))==0)    //checks for 2^n
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
} 
