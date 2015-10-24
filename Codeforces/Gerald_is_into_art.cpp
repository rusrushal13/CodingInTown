#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(0);
    pair<long int,long int> a1,a2,a3;
    long long int i,j,k,l;
    cin>>a1.first>>a1.second;
    cin>>a2.first>>a2.second;
    cin>>a3.first>>a3.second;
    long long int f = 0, area1,area2,area3;
    area1 = a1.first*a1.second;
    area2 = a2.first*a2.second;
    area3 = a3.first*a3.second;
    if(area1>=(area2+area3))
    {   if(a1.first>=a2.first&&a1.second>=a2.second)
        {   if((a1.second-a2.second)>=a3.first&&a1.first>=a3.second)
            {   cout<<"YES";
                return 0;
            }
            if((a1.second-a2.second)>=a3.second&&a1.first>=a3.first)
            {   cout<<"YES";
                return 0;
            }
            i = a1.first - a2.first;
            if(i>=a3.first&&a1.second>=a3.second)
            {   cout<<"YES";
                return 0;
            }
            if(i>=a3.second&&a1.second>=a3.first)
            {   cout<<"YES";
                return 0;
            }
        }
        if(a1.first>=a2.second&&a1.second>=a2.first)
        {   if((a1.second-a2.first)>=a3.first&&a1.first>=a3.second)
            {   cout<<"YES";
                return 0;
            }
            if((a1.second-a2.first)>=a3.second&&a1.first>=a3.first)
            {   cout<<"YES";
                return 0;
            }
            i = a1.first - a2.second;
            if(i>=a3.first&&a1.second>=a3.second)
            {   cout<<"YES";
                return 0;
            }
            if(i>=a3.second&&a1.second>=a3.first)
            {   cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
return 0;
}
