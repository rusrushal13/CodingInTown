#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    int r , b, minr, maxr;
    cin>>r>>b;
    minr = (r<b?r:b);
    maxr = ((minr == r)?b:r);
    cout<<minr<<" "<<(maxr-minr)/2<<endl;
return 0;
}
