/*input
2
2
3
*/
//__author__= "Rushal Verma"
#include<bits/stdc++.h>
using namespace std;
/*******useful typedef's *********/
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vii;
typedef pair<int,int> pii;
typedef list<int>li;
typedef list<li>lii;
typedef set<int>si;
typedef set<ll> sl;
typedef set<si>sii;
typedef map<int,int> mi;
typedef map<ll, ll> mll;
/**************some useful macros/preprocessor********/
#define be_fast std::ios::sync_with_stdio(false);std::cin.tie(NULL); std::cout.tie(NULL);
#define print cout <<
#define ict ll t;cin>>t;while(t--)
#define loop(a,b,c)   for (ll (a)=(b); (a)<(c); ++(a))
#define loopn(a,b,c)  for (ll (a)=(b); (a)<=(c); ++(a))
#define loopd(a,b,c)  for (ll (a)=(b); (a)>=(c); --(a))
#define MOD 1000000007
#define limit 100000+5
#define pb push_back
#define mp make_pair
#define X first
#define Y second
///iterator range
#define all(c) c.begin(), c.end()
///reverse all iterator
#define rall(c) c.rbegin(),c.rend()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++))
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
/***************all user defines functions ******************/
/******************main starts here *************************/
int main()
{   //be_fast;
	int n, count =0;
	scanf("%d", &n);
	// cin>>n;
	int s[n];
	loop(i, 0, n){
		scanf("%d", &s[i]);
	}
	unordered_map<int, int> m;
	loop(a, 0, n){
		loop(b, 0, n){
			loop(c, 0, n){
				m[(s[a]*s[b])+s[c]]++;
			}
		}
	}
	loop(d, 0, n){
		loop(e, 0, n){
			loop(f, 0, n){
				if(s[d] == 0){
				    continue;
				}
				else{
				    count+=m[s[d]*(s[e]+s[f])];
				}
			}
		}
	}
	printf("%d", count);
return 0;
}
/*******************main ends here **************************/  
