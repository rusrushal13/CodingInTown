#include<bits/stdc++.h>
using namespace std;
pair<long long int, long long int> p;
vector< pair<long long int, long long int> > v;
void primefactorization(long long int n)
{   long long int i,ct = 0,m = n;
    for(i=2;i*i<=m;i++)
    {   if(n%i == 0)
        {   ct = 0;
            while(n%i == 0)
            {   n = n/i;
                ct = ct+1;
            }
            p.first = i;
            p.second = ct;
            v.push_back(p);
        }
    }
    if(n != 1)
    {   p.first = n;
        p.second = ct;
        v.push_back(p);
    }
}
int main()
{   ios_base::sync_with_stdio(0);
    long long int t;
    cin>>t;
    pair < long long int, long long int > apair;
    primefactorization(t);
    for (vector<pair<long long int,long long int> >::iterator it2 = v.begin(); it2 != v.end(); ++it2)
    {   apair = *it2;
        cout << apair.first << "^" << apair.second <<"  ";
    }
}
