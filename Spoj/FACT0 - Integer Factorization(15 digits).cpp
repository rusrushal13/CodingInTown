#include<bits/stdc++.h>
using namespace std;
void primefactorization(unsigned long long int n)
{   pair<unsigned long long int, unsigned long long int> p,apair;
	vector< pair<unsigned long long int, unsigned long long int> > v;
	unsigned long long int i,ct = 0,m = n;
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
    for (vector<pair<unsigned long long int,unsigned long long int> >::iterator it2 = v.begin(); it2 != v.end(); ++it2)
    {   apair = *it2;
        cout << apair.first << "^" << apair.second <<"  ";
    }
    cout<<"\n";
}
int main()
{   ios_base::sync_with_stdio(0);
    while(1)
    {	
    	unsigned long long int t;
    	cin>>t;
    	if(t==0)
    		break;
    	primefactorization(t);
    }
return 0;
} 