 
#include<bits/stdc++.h>
using namespace std;
vector< unsigned long long int > v1;
void primefactorization(unsigned long long int n)
{   pair<unsigned long long int, unsigned long long int> p,apair;
	vector< unsigned long long int > v;
	unsigned long long int i,ct = 0,m = n,t1 = n;
    for(i=2;i*i<=m;i++)
    {   if(n%i == 0)
        {   while(n%i == 0)
            {   n = n/i;
            }
            v.push_back(i);
        }
    }
    if(n != 1)
    {
        v.push_back(n);
    }
    if(v.size() >= 3)
        v1.push_back(t1);
 
}
int main()
{   ios_base::sync_with_stdio(0);
    long long int t = 29;
    while(t<=3000)
    {   primefactorization(t);
    	t++;
    }
    int q;
    cin>>q;
    while(q--)
    {   int n;
        cin>>n;
        cout<<v1[n-1]<<endl;
    }
return 0;
}