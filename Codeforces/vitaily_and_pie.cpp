#include<bits/stdc++.h>
using namespace std;
int v[26];
int main()
{   ios_base::sync_with_stdio(0);
	long long int n,i,count=0;
    string a;
    cin>>n>>a;
    for(i=0;i<a.size();i+=2)
    {   if(a[i]!=(a[i+1]+32))
        {   v[a[i]-'a']++;
        	if(!(v[a[i+1]-'A']))	count++;
            else	v[a[i+1]-'A']--;
        }
    }
    cout<<count<<endl;
return 0;
}
