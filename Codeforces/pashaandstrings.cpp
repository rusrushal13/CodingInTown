#include <bits/stdc++.h>
using namespace std;
string s;
int d[300004],k,i;
int main()
{   ios_base::sync_with_stdio(0);
	cin>>s>>i;
	while(i--)
	{   cin>>k;
		d[--k]++;
		d[s.size()-k]--;
	}   k=0;
	for(i=0;i<s.size();i++)
	{   k+=d[i];
		cout << s[(k%2?s.size()-1-i:i)];
	}
}
