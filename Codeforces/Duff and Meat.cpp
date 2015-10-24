#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    int minimum = 1000,ai,pi;
    long long int t,sum = 0 ,i;

    vector<int> a,p;
    cin>>t;
    for(i = 0 ; i< t ; i++)
    {
        cin>>ai>>pi;
        a.push_back(ai);
        p.push_back(pi);
        if(p[i] < minimum)
            minimum = p[i];
        sum += minimum*a[i];
    }
    cout<< sum;
}
