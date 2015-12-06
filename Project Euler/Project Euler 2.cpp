#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{   long long int a=1,b=1,c=0,sum=0;
    while(c<4000000)
    {   c=a+b;
        if((c%2)==0)
            sum+=c;
        a=b;
        b=c;
    }
    cout<<sum;
    return 0;
}

