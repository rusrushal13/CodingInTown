/*input
1
4 2
100000000
500000000
900000000
1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define _ ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
#define mod 1000000000+7
#define limit 100000+5
int fnc(vector<ll> v, ll c, ll x){
	ll temp =1, prev =v[0];
	for(ll i =1;i<v.size();++i){
		if(v[i]-prev>=x){
			temp++;
			if(temp == c){
				return 1;
			}
			prev =v[i];
		}
	}
	return 0;
}
ll bin_search(vector<ll> v, ll c){
	ll lo =0, hi =v[v.size()-1], mid;
	while(lo<hi){
		mid =(lo+hi)/2;
		if(fnc(v, c, mid) == 1){
			lo =mid+1;
		}
		else{
			hi =mid;
		}
	}
	return lo-1;
}
int main()
{	_;
	//	freopen("input.txt", "rt", stdin);
	//	freopen("output.out", "wt", stdout);
	int t;
	cin>>t;
	while(t--){
		ll n, c;
		cin>>n>>c;
		vector<ll> A(n);
		for(ll i =0;i<n;++i){
			cin>>A[i];
		}
		sort(A.begin(), A.end());
		cout<<bin_search(A, c)<<endl;
	}	
return 0;
}