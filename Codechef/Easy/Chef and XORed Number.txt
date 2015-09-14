#include<bits/stdc++.h>
using namespace std;
#define iOS ios_base::sync_with_stdio(false)
int main()
{   iOS;
    int t;
    cin>>t;
    while(t--)
    {   long long int n;
        cin>>n;
        if(n==1)
            cout<<"2\n";
        else if(((n+1)&(n))==0)
            cout<<n/2<<endl;
        else
            cout<<-1<<endl;
    }
 
return 0;
}
